#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    int bsk[100] = {};

    for (int a = 0; a < m; a++){
        int i, j, k;
        cin >> i >> j >> k;

        for (int b = i; b <= j; b++)
            bsk[b] = k;
    }

    for (int a = 1; a <= n; a++)
        cout << bsk[a] << ' ';
}