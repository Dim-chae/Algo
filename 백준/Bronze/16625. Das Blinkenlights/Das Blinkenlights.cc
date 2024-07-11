#include <bits/stdc++.h>

using namespace std;

int gcd (int a, int b) {
    int c;
    while (b != 0) {
        c = a % b;
        a = b;
        b = c;
    }
    return a;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int p, q, s;
    cin >> p >> q >> s;

    if ((p * q) / gcd(p, q) <= s)
        cout << "yes";
    else
        cout << "no";
}