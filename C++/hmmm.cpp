#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v;
    int a,b;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        a=v[0];
        b=v[1];
        if(i>0 && v[i]>v[i-1])
        a=v[i];
    }
    for(int i=1;i<n;i++)
    {
        if(v[i]>v[i-1]&& v[i]!=a)
        b=v[i];
    }
    int c=(a*b);
    cout <<c<<"\n";
    return 0;
}
