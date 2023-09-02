#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, ys = 0, ms = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;

        ys += (t / 30 + 1) * 10;
        ms += (t / 60 + 1) * 15;
    }

    if (ys < ms)
        cout << 'Y' << ' ' << ys;
    else if (ys > ms)
        cout << 'M' << ' ' << ms;
    else
        cout << 'Y' << ' ' << 'M' << ' ' << ys;
}