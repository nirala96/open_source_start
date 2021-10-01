#include <bits/stdc++.h>
using namespace std;
#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define vi vector<int>
#define vp vector<pair<int, int>>
#define vpp vector<pair<pair<int, int>, int>>
#define si set<int>
#define f(x, y, z) for (x = y; x < z; x++)
#define pb push_back
#define mp make_pair
#define ld long double
#define fb(x, y, z) for (x = y; x > z; x--)
#define pqf priority_queue<int, vector<int>>
#define pqb priority_queue<int, vector<int>, greater<int>>
#define ps(x, y) fixed << setprecision(y) << x
#define MOD 1e9
#define PI 3.1415926535


void swap (int *a, int *b)  
{  
    int temp = *a;  
    *a = *b;  
    *b = temp;  
}

int MaxSubArrayKadane(int a[], int n)
{
    int maxsum = INT_MIN;
    int sum = INT_MIN;
    for (size_t i = 0; i < n; i++)
    {
        sum = max(0,sum + a[i]);
        maxsum = max(sum,maxsum);
    }
    
    return maxsum;
}

int main()
{
    IOS
    const int N = 1000;
    int n = N * 2 + 1;
    int a[N*2 + 1] = {0};
    
    for (size_t i = 0; i < n; i++)
    {
        a[i] = -18 + i;
    }
    
    srand (time(NULL));  
  
    for (int i = n - 1; i > 0; i--)  
    {  
        int j = rand() % (i + 1);  
        swap(&a[i], &a[j]);  
    }

    auto start = chrono::steady_clock::now();

    int ans = MaxSubArrayKadane(a, n);

    auto end = chrono::steady_clock::now();

    // Store the time difference between start and end
    auto diff = end - start;

    cout << "Ans = " << ans << endl;
    cout << chrono::duration <double, nano> (diff).count() << " ns" << endl;

    return 0;
}
