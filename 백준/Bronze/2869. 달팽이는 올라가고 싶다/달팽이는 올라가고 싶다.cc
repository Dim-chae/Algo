#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b, v, day = 1;
    cin >> a >> b >> v;

    day += (v - a) / (a - b);

    if ((v - a) % (a - b) != 0)
        day++;

    if (v <= a)
        cout << 1;
    else
        cout << day;
}