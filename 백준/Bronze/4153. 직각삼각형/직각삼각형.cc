#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int tmp;

    while (true) {
        int a, b, c;
        cin >> a >> b >> c;

        if (a == 0 && b == 0 && c == 0)
            return 0;

        if (a > b) {
            tmp = b;
            b = a;
            a = tmp;
        }
        if (b > c) {
            tmp = c;
            c = b;
            b = tmp;
        }
        if (c * c == a * a + b * b)
            cout << "right" << '\n';
        else
            cout << "wrong" << '\n';
    }
}