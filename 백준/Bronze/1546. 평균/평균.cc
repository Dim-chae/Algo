#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m = 0;
    double res = 0;
    cin >> n;

    int score[1000] = {};

    for (int i = 0; i < n; i++) {
        cin >> score[i];

        if (score[i] > m)
            m = score[i];

        res += score[i];
    }

    res = (res / m * 100) / n;
    cout << res;
}