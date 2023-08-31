#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int res = 0;

    for (int i = 1; i < n; i++) {
        int tmp = i;
        int sum = 0;

        while (tmp > 0) {
            sum += tmp % 10;
            tmp /= 10;
        }
        if (sum + i == n) {
            res = i;
            break;
        }
    }
    cout << res;
}