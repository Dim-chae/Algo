#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, tmp, cnt = 0, st = 665;
    cin >> n;

    while (true) {
        st++;
        tmp = st;

        while (tmp >= 666) {
            if (tmp % 1000 == 666) {
                cnt++;
                break;
            }
            tmp /= 10;
        }
        if (cnt == n) {
            cout << st;
            break;
        }
    }
}