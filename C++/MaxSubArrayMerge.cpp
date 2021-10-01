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

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

tuple<int, int, int> MaxSubArrayMerge(int a[], int l, int r);

tuple<int, int, int> MaximumMiddleArray(int a[], int l, int m, int r);

int main()
{
    IOS 
    const int N = 1000;
    int n = N * 2 + 1;
    int a[N*2 + 1] = {0};

    for (size_t i = 0; i < n; i++)
    {
        a[i] = -1 * N + i;
    }

    srand(time(NULL));

    for (int i = n - 1; i > 0; i--)
    {
        int j = rand() % (i + 1);
        swap(&a[i], &a[j]);
    }

    auto start = chrono::steady_clock::now();

    tuple<int, int, int> ans = MaxSubArrayMerge(a, 0, n - 1);

    auto end = chrono::steady_clock::now();

    // Store the time difference between start and end
    auto diff = end - start;

    cout << "Ans = " << get<2>(ans) << endl;
    cout << chrono::duration<double, nano>(diff).count() << " ns" << endl;

    return 0;
}

tuple<int, int, int> MaxSubArrayMerge(int a[], int l, int r)
{
    if (l == r)
    {
        return {l, r, a[l]};
    }
    int m = (l + r) / 2;
    tuple<int, int, int> left = MaxSubArrayMerge(a, l, m);

    tuple<int, int, int> right = MaxSubArrayMerge(a, m + 1, r);

    tuple<int, int, int> cont = MaximumMiddleArray(a, l, m, r);

    if (get<2>(left) >= get<2>(right) && get<2>(left) >= get<2>(cont))
    {
        return left;
    }
    else if (get<2>(right) >= get<2>(left) && get<2>(right) >= get<2>(cont))
    {
        return right;
    }
    else
    {
        return cont;
    }
}

tuple<int, int, int> MaximumMiddleArray(int a[], int l, int m, int r)
{
    int left = 0, right = 0, left_sum = INT_MIN, right_sum = INT_MIN, sum = 0;
    for (int i = m; i >= l; i--)
    {
        sum += a[i];
        if (sum > left_sum)
        {
            left_sum = sum;
            left = i;
        }
    }
    for (int i = m + 1; i <= r; i++)
    {
        sum += a[i];
        if (sum > right_sum)
        {
            right_sum = sum;
            right = i;
        }
    }

    return {left, right, left_sum + right_sum};
}
