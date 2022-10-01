#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin>>s;
    char c;
    cin>>c;
    int n=s.size();
    int flag=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]==c)
        {
            if(i%2==0)
            {
                flag=1;
                break;
            }
        }
    }
    if(flag==0)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
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




