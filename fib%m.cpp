#include <bits/stdc++.h>
using namespace std;
#define maxu INT_MAX

long long find(long long m)
{
    long long a = 0, b = 1, c = a + b;
    for (int i = 0; i < m * m; i++) {
        c = (a + b) % m;
        a = b;
        b = c;
        if (a == 0 && b == 1) return (i + 1);
    }
}

long long fib(long long y,long long m)
{
    long long f[10000000];
    f[0]=0;
    f[1]=1;
    for(long long i=2;i<=y;i++)
        f[i]=(f[i-1]+f[i-2])%m;
    return f[y];
}

int main()
{
    long long n,m;
    cin>>n>>m;
    long long y=n%(find(m));
    long long x=fib(y,m);
    cout<<x;
    return 0;
}
