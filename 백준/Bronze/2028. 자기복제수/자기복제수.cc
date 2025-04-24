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

        string s1 = to_string(N);
        string s2 = to_string(N * N);

        if (s2.substr(s2.length() - s1.length()) == s1)
            cout << "YES" << '\n';
        else 
            cout << "NO" << '\n';
    }
}