#include<bits/stdc++.h>
using namespace std;
void solve()
{
  int a[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
  string s,ms;
  cin>>ms;
  unordered_map<char,int>mp;
  for(int i=0;i<ms.size();i++)
  {
    mp[ms[i]]=i;
  }
  cin>>s;
  int x=0;
  for(int i=1;i<s.size();i++)
  {
    x+=abs((mp[s[i]]+1)-(mp[s[i-1]]+1));
  }
  cout<<x<<endl;



















    return;
}

		
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}




