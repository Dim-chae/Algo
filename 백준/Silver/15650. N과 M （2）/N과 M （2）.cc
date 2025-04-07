#include <bits/stdc++.h>
using namespace std;

int n, m;

void solution(int p, int c, string s) {
    if (c == m) cout << s << '\n';
    else {
        for (int i = p + 1; i <= n; i++) {
            solution(i, c + 1, s + to_string(i) + " ");
        }
    }
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    cin >> n >> m;
    solution(0, 0, "");
}