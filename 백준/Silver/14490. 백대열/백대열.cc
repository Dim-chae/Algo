#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    string s;
    cin >> s;

    int pos = s.find(':');

    int n = stoi(s.substr(0, pos));
    int m = stoi(s.substr(pos + 1));

    int div = __gcd(n, m);

    cout << n / div << ':' << m / div;
}