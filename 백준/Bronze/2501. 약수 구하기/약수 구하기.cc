#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >> n >> k;

    int mea = 0, cnt = 0;

    for (int i = 1; i <= n; i++){
        if (n % i == 0) {
            mea = i;
            cnt++;
        }

        if (cnt == k) {
            cout << mea;
            break;
        }
        else if (cnt < k && i == n)
            cout << 0;
    }
}