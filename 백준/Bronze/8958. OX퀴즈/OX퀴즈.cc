#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++){
        int score = 0, cnt = 0;
        string s;
        cin >> s;

        for (auto j : s) {
            if (j == 'O') {
                cnt++;
                score += cnt;
            } else
                cnt = 0;
        }

        cout << score << '\n';
    }
}