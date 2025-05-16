#include <bits/stdc++.h>
using namespace std;

bool paper[128][128];
int white = 0, blue = 0;

void check(int x, int y, int n) {
    int color = paper[x][y];
    for (int i = x; i < x + n; i++)
        for (int j = y; j < y + n; j++)
            if (paper[i][j] != color) {
                check(x, y, n / 2);
                check(x + n / 2, y, n / 2);
                check(x, y + n / 2, n / 2);
                check(x + n / 2, y + n / 2, n / 2);
                return;
            }
    if (color == 0) white++;
    else blue++;
}   

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            cin >> paper[i][j];
        
    check(0, 0, N);
    cout << white << '\n' << blue;
}