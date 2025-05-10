#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int M, N, K;
    cin >> M >> N >> K;

    while (M--) {
        string s;

        for (int i = 0; i < N; i++) {
            char c;
            cin >> c;

            for (int j = 0; j < K; j++)
                s.push_back(c);
        }
        
        for (int j = 0; j < K; j++)
            cout << s << '\n';
    }
}