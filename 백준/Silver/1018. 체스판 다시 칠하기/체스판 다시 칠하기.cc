#include <bits/stdc++.h>

using namespace std;

int board[51][51];

int check(int x, int y) {
    int wc = 0;
    int bc = 0;

    for (int i = x; i < x + 8; i++) {
        for (int j = y; j < y + 8; j++) {
            if ((i + j) % 2 == board[i][j])
                wc++;
            else if ((i + j + 1) % 2 == board[i][j])
                bc++;
        }
    }
    return min(wc, bc);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    int mi = 2500;
    char c;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> c;
            if (c == 'B') board[i][j] = 0;
            else board[i][j] = 1;
        }
    }
    for (int i = 0; i <= n - 8; i++) {
        for (int j = 0; j <= m - 8; j++) {
            if (mi > check(i, j))
                mi = check(i, j);
        }
    }
    cout << mi;
}