#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            if (3 * i + 5 * j == n) {
                cout << i + j;
                return 0;
            }
        }
    cout << -1;
}