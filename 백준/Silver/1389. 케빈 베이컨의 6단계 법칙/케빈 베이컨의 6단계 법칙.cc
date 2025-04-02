#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int N, M;
    cin >> N >> M;
    
    int n[101][101] = {0, };

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i != j)
                n[i][j] = 100000;
        }
    }

    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        n[a-1][b-1] = 1;
        n[b-1][a-1] = 1;
    }

    for (int k = 0; k < N; k++) {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (n[i][k] + n[k][j] < n[i][j]) {
                    n[i][j] = n[i][k] + n[k][j];
                }
            }
        }
    }

    int min = 100000, res;

    for (int i = 0; i < N; i++) {
        int total = 0;
        for (int j = 0; j < N; j++) {
            total += n[i][j];
        }
        if (min > total) {
            min = total;
            res = i + 1;
        }
    }
    cout << res;
}