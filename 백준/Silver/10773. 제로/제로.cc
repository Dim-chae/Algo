#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int K;
    cin >> K;

    stack<int> s;

    int n, res = 0;

    for (int i = 0; i < K; i++) {
        cin >> n;
        if (n == 0) {
            s.pop();
        }
        else {
            s.push(n);
        }
    }

    while (!s.empty()) {
        res += s.top();
        s.pop();
    }

    cout << res;
}