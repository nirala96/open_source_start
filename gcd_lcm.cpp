#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    while(a > 0) {
        int temp = b % a;
        b = a;
        a = temp;
    }
    return b;
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main(int argc, char const *argv[]) {

    int a, b;
    cin >> a >> b;
    cout << "GCD: " << gcd(a, b) << " LCM: " << lcm(a, b) << endl;
    
    return 0;
}
