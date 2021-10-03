#include <bits/stdc++.h>
using namespace std;
class addition
{
public:
    int inita = 0, initb = 0;
    int *a, *b;

public:
    addition(int x, int y)
    {
        a = &inita;
        b = &initb;
        // cout  << &a << " " << &b << endl;
        *b = y;
        *a = x;
        // a = &x;
        // b = &y;
    }

    void add()
    {
        cout << (*a + *b) << endl;
    }
};

int main()
{

    addition a(10, 20);

    a.add();

    return 0;
}