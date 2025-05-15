#include <bits/stdc++.h>
using namespace std;

int cu, du, cd, dd, cp, dp, h, t;

void atk(int c, int d) {
    if (t % c == 0) h -= d;
}
int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    cin >> cu >> du >> cd >> dd >> cp >> dp >> h;

    while (1) {
        atk(cu, du);
        atk(cd, dd);
        atk(cp, dp);
        if (h <= 0) break;
        t++;
    }

    cout << t;
}