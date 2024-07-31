#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int cur = 0, mx = 0;

    for (int i = 0; i < 10; i++) {
        int off, on;
        cin >> off >> on;
        cur += (on - off);
        if (cur >= mx) mx = cur;
    }
    cout << mx;
}