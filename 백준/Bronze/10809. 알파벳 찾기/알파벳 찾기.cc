#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int idx[26], cnt[26] = {};
    fill_n(idx, 26, -1);

    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        cnt[s[i] - 'a']++;

        if (cnt[s[i] - 'a'] == 1)
            idx[s[i] - 'a'] = i;
    }

    for (auto i : idx)
        cout << i << ' ';
}