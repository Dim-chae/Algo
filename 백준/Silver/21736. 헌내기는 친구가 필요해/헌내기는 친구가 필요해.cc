#include <bits/stdc++.h>

using namespace std;

#define X first
#define Y second

string board[601];
bool vis[601][601];

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

queue<pair<int, int>> Q;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int N, M;
    cin >> N >> M;

    for (int i = 0; i < N; i++)
        cin >> board[i];

    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            if (board[i][j] == 'I') {
                vis[i][j] = 1;
                Q.push({i, j});
            }

    int cnt = 0;

    while (!Q.empty()) {
        pair<int, int> cur = Q.front(); Q.pop();

        for (int dir = 0; dir < 4; dir++) {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];

            if (nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
            if (board[nx][ny] == 'X' || vis[nx][ny]) continue;

            vis[nx][ny] = 1;
            Q.push({nx, ny});

            if (board[nx][ny] == 'P') cnt++;
        }
    }
    if (cnt > 0) cout << cnt;
    else cout << "TT";
}