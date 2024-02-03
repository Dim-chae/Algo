#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int N, cnt;
    cin >> N;

    while (N--) {
        stack<char> c;
        string s;
        cin >> s;

        for (auto i : s) {
            if (i == 'A') {
                if (c.empty() || c.top() == 'B')
                    c.push(i);
                else if (c.top() == 'A')
                    c.pop();
            }
            if (i == 'B') {
                if (c.empty() || c.top() == 'A')
                    c.push(i);
                else if (c.top() == 'B')
                    c.pop();
            }
        }
        if (c.empty()) cnt++;
    }
    cout << cnt;
}