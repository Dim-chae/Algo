#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    string n;
    cin >> n;

    stack<char> s;
    int cnt = 0;

    for (int i = n.length() - 1; i >= 0; i--) {
        s.push(n[i]);
        cnt++;

        if (cnt == 3 && i != 0) {
            s.push(',');
            cnt = 0;
        }
    }

    while (!s.empty()) {
        cout << s.top();
        s.pop();
    }
}