#include <bits/stdc++.h>
#define IOS                  \
	ios::sync_with_stdio(0); \
	cin.tie(0);              \
	cout.tie(0);
#define endl "\n"
#define ll long long int 
#define pb push_back
#define ma make_pair
#define f1(i, a, b) for (int i = a; i < b; i++)
#define f2(i, a, b) for (int i = a; i > b; i--)
#define ff first
#define ss second
#define lb lower_bound
#define ub upper_bound
#define mod 1000000007
#define ii pair<int,int>
#define vi vector<int>
#define vl vector<ll>
#define vii vector<ii>
#define pq priority_queue<int,vi,greater<int> > //for min heap.
using namespace std;
vector<int> arr[100001];
bool vis[100001];
int col[100001];
int dx[4]={-1,0,1,0};
int dy[4]={0,1,0,-1};
// bool isvalid(int x,int y)
// {
//     if(x<1||x>n||y<1||y>m)
//     return false;
//     if(vis[x][y]==true||ar[x][y]=='#')
//     return false;
//     return true;
// }
bool dfs(int node,int c)
{
    vis[node]=1;
    col[node]=c;
    for(auto child :arr[node])
    {
        if(!vis[child])
        {
            if(dfs(child,c^1)==false)
            return false;
        }
        else
        {
            if(col[node]==col[child])
            return false;
        }
    }
    return true;
}
int main()
{
    int n,m,a,b;
    cin>>n>>m;
    while(m--)
    {
        cin>>a>>b;
        arr[a].pb(b);
        arr[b].pb(a);
    }
    bool f=true;
    for(int i=1;i<=n;i++)
    {
        if(!vis[i])
        {
            f=dfs(i,0);
            if(f==false)
            break;
        }
    }
    if(!f) cout<<"IMPOSSIBLE"<<endl;
    else
    {
        for(int i=1;i<=n;i++)
        cout<<col[i]+1<<" ";
        
    }
    
}
