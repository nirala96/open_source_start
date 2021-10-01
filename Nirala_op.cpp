#include<iostream>
using namespace std;
int main()
{
    long long int a,b;
    cin>>a>>b;
    if(a>b)
    for(long long int i=1;i<=b;i++)
    {
        if((a*i)%b==0)
        {
            cout<<(a*i);
            break;
        }
    }
    else
    for(long long int i=1;i<=a;i++)
    {
        if((b*i)%a==0)
        {
            cout<<(b*i);
            break;
        }
    }
    return 0;
}
