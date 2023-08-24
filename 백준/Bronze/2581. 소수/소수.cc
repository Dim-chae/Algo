#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int m, n, min = -1, total = 0, cnt = 0;
    cin >> m >> n;

    for (int i = m; i <= n; i++) {
        for (int j = 1; j <= i; j++)
            if (i % j == 0)
                cnt++;

        if (cnt == 2) {
            total += i;

            if (min == -1)
                min = i;
        }
        cnt = 0;
    }

    if (total == 0)
        cout << "-1";
    else
        cout << total << '\n' << min;
}