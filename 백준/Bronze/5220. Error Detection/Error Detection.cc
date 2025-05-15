#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int T;
    cin >> T;

    while (T--) {
        int n, c;
        cin >> n >> c;
        string s = bitset<16>(n).to_string();

        int cnt = 0;

        for (auto i : s)
            if (i == '1') cnt++;

        if (cnt % 2 == c) cout << "Valid" << '\n';
        else cout << "Corrupt" << '\n';
    }
}