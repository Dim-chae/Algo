#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int T;
    cin >> T;

    while (T--) {
        int N, M;
        cin >> N >> M;

        int res = 1, tmp = 1;

        for (int i = M; i > M - N; i--) {
            res *= i;
            res /= tmp++;
        }
        cout << res << '\n';
    }
}