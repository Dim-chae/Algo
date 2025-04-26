#include <bits/stdc++.h>
using namespace std;

string s[101];

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int N, K;
    cin >> N >> K;

    for (int i = 0; i < N; i++)
        cin >> s[i];

    int len = 0;

    for (int i = 0; i < N; i++) {
        cout << s[i];
        len += s[i].length();

        if (i < N - 1 && len + s[i + 1].length() <= K)
            cout << ' ';

        else {
            cout << '\n';
            len = 0;
        }
    }
}