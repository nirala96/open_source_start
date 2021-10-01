#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        if(n%m==0)
        {
            if((n/m)%2==0) cout<<"A";
            else
            cout<<"B";
        }
        else
        {
            if((n/m)%2==0) cout<<"B";
            else
            cout<<"A";
        }
        cout<<"\n";
    }
    return 0;
}
