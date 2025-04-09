#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        map<string, int> m;

        while (N--) {
            string a, b;
            cin >> a >> b;
            m[b]++;
        }

        int res = 1;

        for (auto it = m.begin(); it != m.end(); ++it)
            res *= (it->second + 1);

        cout << res - 1 << '\n';
    }
}