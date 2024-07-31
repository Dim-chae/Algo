#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        int pos = 0;

        while (n != 0) {
            if (n % 2 == 1) cout << pos << ' ';
            n /= 2;
            pos++;
        }
    }
}