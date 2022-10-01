#include <bits/stdc++.h>
using namespace std;
void solve()
{

    int n, c;
    cin >> n >> c;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());
    int ans = 0;
    int count = 1;
    for (int i = 1; i < n; i++)
    {
        if (v[i] == v[i - 1])
        {
            count++;
        }
        else
        {
            //cout<<count<<" ";
            ans = ans + min(c, count);
            //cout<<ans<<endl;
            count = 1;
        }
        // cout<<count<<endl;
    }

    if(count==n)
    {
        ans = ans + min(c, count);
        cout<<ans<<endl;
        return;
    }
    cout << ans+min(count,c)<< endl;

    return;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
