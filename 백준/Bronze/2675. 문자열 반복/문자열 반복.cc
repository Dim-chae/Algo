#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    int t, r;

    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> r >> s;

        for (int j = 0; j < s.length(); j++)
            for (int k = 0; k < r; k++)
                cout << s[j];
        cout << '\n';
    }
}