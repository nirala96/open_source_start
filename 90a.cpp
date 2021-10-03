#include <bits/stdc++.h>
#define IOS                  \
	ios::sync_with_stdio(0); \
	cin.tie(0);              \
	cout.tie(0);
#define endl "\n"
#define ll long long int 
#define pb push_back
#define pf push_front
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
vector<ll> primefactor(ll n)
{    
    vl prime;
    for(ll i=2;i*i<=n;i++)
    {   if(n%i==0)
        { 
           while(n%i==0)
          { prime.pb(i); n/=i;}
          
        }
    }
    if(n>1) prime.pb(n);
    return prime;
}
int main()
{  IOS;
   int t;
   cin>>t;
   while(t--)
   {
       ll a,b,c;
       cin>>a>>b>>c;
       if(a<c)
       cout<<1<<" ";
       else cout<<-1<<" ";
       if(c<a*b)
       cout<<b<<endl;
       else cout<<-1<<endl;
   }
}
