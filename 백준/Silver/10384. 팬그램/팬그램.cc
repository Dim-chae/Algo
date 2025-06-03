#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n;
    cin >> n;
    cin.ignore();

    for (int i = 1; i <= n; i++) {
        int alp[26] = {0};
        string s;
        getline(cin, s);

        for (char c : s) {
            if (isalpha(c)) {
                alp[toupper(c) - 'A']++;
            }
        }

        bool isPan = 1, isDoublePan = 1, isTriplePan = 1;

        for (int j = 0; j < 26; j++) {
            if (alp[j] < 1) isPan = 0;
            if (alp[j] < 2) isDoublePan = 0;
            if (alp[j] < 3) isTriplePan = 0;
        }

        cout << "Case " << i << ": ";
        if (!isPan) cout << "Not a pangram" << '\n';
        else if (isTriplePan) cout << "Triple pangram!!!" << '\n';
        else if (isDoublePan) cout << "Double pangram!!" << '\n';
        else cout << "Pangram!" << '\n';
    }
}