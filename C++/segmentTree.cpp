#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const ll inf = 1e15;


class segmentTree
{
	private:
		vector<ll>arr;
	public:	vector<ll>t;
	private: ll n;
		
	public:	segmentTree(vector<ll>m,ll c) : arr(m),n(c)
		{
		
			t.resize(4*n);
			build(1,0,c-1);
		}
	
	private: void build(ll i, ll l, ll r)
	{
		if(l == r)
		{
			
			t[i] = arr[l];
			return;
		}

		ll mid = (l+r)/2;
		build(2*i,l,mid);
		build((2*i) + 1, mid+1, r);
		t[i] = merge(t[lc(i)], t[rc(i)]);
	}
    public: void show()
	{
		for(int i=0; i<t.size(); i++)
		{
			cout<<t[i]<<" ";
		}
	}
	private:
		ll lc(ll x) {return 2*x;}
		ll rc(ll y) {return 2*y + 1;}
		ll merge(ll x, ll y){return x+y;}
		
	public:
		void modify(ll pos, ll val,ll i = 1, ll l = 0, ll r = -1)
		{
			if(r == -1)
				r = n-1;
			if(l == r)
			{
				t[i] = val;
				return;
			}
			ll mid = (l + r)/2;
			if(pos <= mid)
				modify(pos,val,lc(i),l,mid);
			else
				modify(pos,val,rc(i),mid+1,r);
				
			t[i] = merge(t[lc(i)], t[rc(i)]);
			
		}
		
	public:
		ll query(ll ql, ll qr,ll i = 1, ll l = 0, ll r = -1)
		{
			if(r == -1)
				r = n-1;
			if(r < ql || l > qr)
			{
				return 0;
			}
			if(ql <= l && qr >= r)
				return t[i];
				
			ll mid = (l+r)/2;
			
			ll resl = 	query(ql,qr,lc(i),l,mid);
			ll resr = 	query(ql,qr,rc(i),mid+1,r);	
			t[i] = merge(resl,resr);
		}
};







int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int ignore = 1;
    //cin>>ignore;
	
	while(ignore--)
	{
		vector<ll>arr(5);
		iota(arr.begin(),arr.end(),0);
		segmentTree d(arr,arr.size());
	//	d.show();
		//d.modify(1,55);
		cout<<d.query(1,3)<<endl;
		//d.show();
	}
}
