#include <bits/stdc++.h>

using namespace std;

int pp(int k, int n) {
    if (k == 0) return n;
    else if (n == 1) return 1;
    else return (pp(k - 1, n) + pp(k, n - 1));
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int T;
    cin >> T;

    while (T--) {
        int k, n;
        cin >> k >> n;
        cout << pp(k, n) << '\n';
    }
}