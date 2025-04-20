#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int M;
    cin >> M;

    int c[4] = {0, 1, 2, 3};

    while (M--) {
        int X, Y;
        cin >> X >> Y;

        int tmp = c[X];
        c[X] = c[Y];
        c[Y] = tmp;
    }

    for (int i = 1; i < 4; i++)
        if (c[i] == 1) {
            cout << i;
            break;
        }
}