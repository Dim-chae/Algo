#include <bits/stdc++.h>

using namespace std;

#define Z get<0>
#define X get<1>
#define Y get<2>

int board[102][102][102];
int dist[102][102][102];

int dx[6] = {1, -1, 0, 0, 0, 0};
int dy[6] = {0, 0, 1, -1, 0, 0};
int dz[6] = {0, 0, 0, 0, 1, -1};

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int M, N, H;
    cin >> M >> N >> H;

    for (int i = 0; i < H; i++)
        for (int j = 0; j < N; j++)
            for (int k = 0; k < M; k++)
                cin >> board[i][j][k];

    queue<tuple<int, int, int>> Q;

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < N; j++) {
            for (int k = 0; k < M; k++) {
                if (board[i][j][k] == 0) dist[i][j][k] = -1;
                else if (board[i][j][k] == 1) Q.push(make_tuple(i, j, k));
            }
        }
    }

    while (!Q.empty()) {
        tuple<int, int, int> cur = Q.front();
        Q.pop();

        for (int dir = 0; dir < 6; dir++) {
            int nx = X(cur) + dx[dir];
            int ny = Y(cur) + dy[dir];
            int nz = Z(cur) + dz[dir];

            if (nx < 0 || nx >= N || ny < 0 || ny >= M || nz < 0 || nz >= H) continue;
            if (dist[nz][nx][ny] >= 0) continue;

            dist[nz][nx][ny] = dist[Z(cur)][X(cur)][Y(cur)] + 1;
            Q.push(make_tuple(nz, nx, ny));
        }
    }

    int ans = 0;

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < N; j++) {
            for (int k = 0; k < M; k++) {
                if (dist[i][j][k] == -1) {
                    cout << -1;
                    return 0;
                }
                ans = max(ans, dist[i][j][k]);
            }
        }
    }
    cout << ans;
}