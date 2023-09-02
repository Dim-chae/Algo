#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long int a, b;
    cin >> a >> b;

    if (a - b == 0 || abs(a - b) == 1)
        cout << 0;
    else {
        cout << abs(a - b) - 1 << '\n';

        if (a < b)
            for (int i = a + 1; i < b; i++)
                cout << i << ' ';
        else
            for (int i = b + 1; i < a; i++)
                cout << i << ' ';
    }
}