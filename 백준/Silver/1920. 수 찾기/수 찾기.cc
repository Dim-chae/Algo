#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int N, M, tmp, num;
    cin >> N;

    set<int> s;

    for (int i = 0; i < N; i++) {
        cin >> tmp;
        s.insert(tmp);
    }

    cin >> M;

    for (int i = 0; i < M; i++) {
        cin >> num;

        if (s.find(num) != s.end())
            cout << 1 << '\n';
        else
            cout << 0 << '\n';
    }
}
