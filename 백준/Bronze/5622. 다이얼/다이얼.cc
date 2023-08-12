#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 0;
    string s;
    cin >> s;

    for (auto i : s) {
        t += ((int)i - 65) / 3 + 3;
        if (i == 'S' || i == 'V' || i == 'Y' || i == 'Z')
            t--;
    }

    cout << t;
}