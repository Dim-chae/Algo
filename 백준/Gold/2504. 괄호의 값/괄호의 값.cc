#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    stack<char> S;

    string s;
    cin >> s;

    int ans = 0, tmp = 1;
    char prv;

    for (auto c : s) {
        if (c == '(') {
            tmp *= 2;
            S.push(c);
        }
        else if (c == '[') {
            tmp *= 3;
            S.push(c);
        }
        else if (c == ')') {
            if (S.empty() || S.top() != '(') {
                ans = 0;
                break;
            }
            else if (prv == '(') {
                ans += tmp;
                tmp /= 2;
            }
            else tmp /= 2;
            S.pop();
        }

        else if (c == ']') {
            if (S.empty() || S.top() != '[') {
                ans = 0;
                break;
            }
            else if (prv == '[') {
                ans += tmp;
                tmp /= 3;
            }
            else tmp /= 3;
            S.pop();
        }
        prv = c;
    }
    if (!S.empty()) cout << 0;
    else cout << ans;
}