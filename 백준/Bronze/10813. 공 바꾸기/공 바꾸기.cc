#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m, temp;
    cin >> n >> m;

    int bsk[n];

    for (int a = 1; a <= n; a++)
        bsk[a-1] = a;

    for (int a = 0; a < m; a++){
        int i, j;
        cin >> i >> j;

        temp = bsk[i-1];
        bsk[i-1] = bsk[j-1];
        bsk[j-1] = temp;
    }

    for (auto a : bsk)
        cout << a << ' ';
}