#include <iostream>
using namespace std;

int main()
{
    int a[1000][1000];
    long n,q;
    cin>>n>>q;
    for(long i=0;i<n;i++)
    {
        int p;
        cin>>p;
        for(int j=0;j<p;j++)
        {
            cin>>a[i][j];
        }
    }
    int s,m;
    for(long i=0;i<q;i++)
    {
        cin>>s>>m;
    }
    cout<<a[s][m]<<"\n";
    return 0;
}
