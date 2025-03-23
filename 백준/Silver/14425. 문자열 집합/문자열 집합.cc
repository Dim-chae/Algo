#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int N, M, cnt = 0;
    cin >> N >> M;

    set<string> S;

    while (N--) {
        string tmp;
        cin >> tmp;
        S.insert(tmp);
    }

    while (M--) {
        string tmp;
        cin >> tmp;
        if (S.find(tmp) != S.end()) cnt++;
    }

    cout << cnt;
}