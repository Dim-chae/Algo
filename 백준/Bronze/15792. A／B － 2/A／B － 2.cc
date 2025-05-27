#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int a, b;
    cin >> a >> b;

    cout << int(a / b) << '.';

    a %= b;

    for (int i = 1; i <= 1000; i++) {
        a *= 10;
        cout << a / b;
        a %= b;
    }
}