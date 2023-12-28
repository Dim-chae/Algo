#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n;
    cin >> n;

    string s1, s2;
    int alp[26];

    while (n--) {
        cin >> s1 >> s2;

        fill(alp, alp + 26, 0);

        for (int i = 0; i < s1.length(); i++) {
            alp[s1[i] - 'a']++;
            alp[s2[i] - 'a']--;
        }

        bool isPossible = true;

        for (auto i : alp) {
            if (i != 0) {
                isPossible = false;
                break;
            }
        }

        if (isPossible)
            cout << "Possible" << '\n';
        else
            cout << "Impossible" << '\n';
    }
}