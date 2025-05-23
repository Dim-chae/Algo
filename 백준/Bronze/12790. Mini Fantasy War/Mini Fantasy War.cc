#include <bits/stdc++.h>
using namespace std;

#define loop for (int i = 0; i < 4; i++)
#define con(a, b) if (a < b) a = b; 

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int T;
    cin >> T;

    while (T--) {
        int c[4], e[4];

        loop cin >> c[i];
        loop cin >> e[i];

        int hp, mp, at, de;

        hp = c[0] + e[0], mp = c[1] + e[1];
        at = c[2] + e[2], de = c[3] + e[3];

        con(hp, 1);
        con(mp, 1);
        con(at, 0);

        cout << hp + 5 * mp + 2 * at + 2 * de << '\n';
    }
}