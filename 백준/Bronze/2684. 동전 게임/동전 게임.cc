#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int P;
    cin >> P;

    while (P--) {
        string s;
        cin >> s;

        int a[8] = {0, };

        for (int i = 0; i < s.length() - 2; i++) {
            if (s[i] == 'H') {
                if (s[i + 1] == 'H') {
                    if (s[i + 2] == 'H') a[7]++;
                    else a[6]++;
                }
                else {
                    if (s[i + 2] == 'H') a[5]++;
                    else a[4]++;
                }
            }
            else {
                if (s[i + 1] == 'H') {
                    if (s[i + 2] == 'H') a[3]++;
                    else a[2]++;
                }
                else {
                    if (s[i + 2] == 'H') a[1]++;
                    else a[0]++;
                }
            }
        }
        for (auto i : a) cout << i << ' ';
        cout << '\n';
    }   
}