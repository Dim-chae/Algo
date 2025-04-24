#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int N;
    cin >> N;
    cin.ignore();

    for (int i = 1; i <= N; i++) {
        string a, b;
        getline(cin, a);
        getline(cin, b);

        int a_cnt[26] = {0, };
        int b_cnt[26] = {0, };

        for (auto j : a) a_cnt[j - 'a']++;
        for (auto j : b) b_cnt[j - 'a']++;

        int res = 0;

        for (int j = 0; j < 26; j++)
            if (a_cnt[j] != b_cnt[j]) res += abs(a_cnt[j] - b_cnt[j]);
        
        cout << "Case #" << i << ": " << res << '\n';
    }
}