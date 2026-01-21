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
bool t(ll a,ll b,ll c)
{
    if((a+b)>c&&(b+c)>a&&(c+a)>b)
    return true;
    return false;
}
int main()
{  IOS;
   int t;
   cin>>t;
   while(t--)
   {
       int n;
       cin>>n;
      int x=ceil(1.0*n/4); // no of 8 ;
    //   no of 9 = n-x;
      for(int i=0;i<n-x;i++)
      cout<<9;
      for(int i=0;i<x;i++)
      cout<<8;
      cout<<endl;
   }
 
}  
