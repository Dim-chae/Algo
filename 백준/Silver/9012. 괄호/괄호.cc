#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int T;
    cin >> T;

    while (T--) {
        stack<char> c;
        string s;
        cin >> s;

        bool isItVPS = true;

        for (auto i : s) {
            if (i == '(')
                c.push(i);
            else if (i == ')') {
                if (c.empty()) {
                    isItVPS = false;
                    break;
                }
                else if (c.top() == '(')
                    c.pop();
            }
        }
        if (!c.empty()) isItVPS = false;

        if (isItVPS == true) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
}