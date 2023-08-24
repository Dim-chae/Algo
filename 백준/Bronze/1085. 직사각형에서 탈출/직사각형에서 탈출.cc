#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int x, y, w, h;
    cin >> x >> y >> w >> h;

    int min = x;

    if (w - x < min)
        min = w - x;
    if (h - y < min)
        min = h - y;
    if (y < min)
        min = y;

    cout << min;
}