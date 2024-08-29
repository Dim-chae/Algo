#include <bits/stdc++.h>

using namespace std;

#define X first
#define Y second

int board[1001][1001];
int dist[1001][1001];

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int N, M;
    cin >> N >> M;

    queue<pair<int, int>> Q;

    for (int i = 0; i < N; i++)
        fill(dist[i], dist[i] + M, -1);

    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            cin >> board[i][j];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (board[i][j] == 2) {
                Q.push({i, j});
                dist[i][j] = 0;
                break;
            }
        }
    }

    while (!Q.empty()) {
        pair<int, int> cur = Q.front(); Q.pop();

        for (int dir = 0; dir < 4; dir++) {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];

            if (nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
            if (dist[nx][ny] != -1 || board[nx][ny] == 0) continue;

            Q.push({nx, ny});
            dist[nx][ny] = dist[cur.X][cur.Y] + 1;
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (board[i][j] != 0)
                cout << dist[i][j] << ' ';
            else cout << 0 << ' ';
        }
        cout << '\n';
    }
}