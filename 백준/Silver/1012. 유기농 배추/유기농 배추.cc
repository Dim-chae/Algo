#include <bits/stdc++.h>

using namespace std;

#define X first
#define Y second

int board[51][51];
bool vis[51][51];

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

int M, N, K;
queue<pair<int, int>> Q;

void BFS(int x, int y) {
  Q.push({x, y});
  vis[x][y] = 1;

  while (!Q.empty()) {
    auto cur = Q.front();
    Q.pop();

    for (int dir = 0; dir < 4; dir++) {
      int nx = cur.X + dx[dir];
      int ny = cur.Y + dy[dir];

      if (nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
      if (vis[nx][ny] || board[nx][ny] != 1) continue;

      Q.push({nx, ny});
      vis[nx][ny] = 1;
    }
  }
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(0);

  int T;
  cin >> T;

  while (T--) {
    cin >> M >> N >> K;

    for (int i = 0; i < K; i++) {
      int x, y;
      cin >> x >> y;
      board[y][x] = 1;
    }

    int bug = 0;

    for (int i = 0; i < N; i++) {
      for (int j = 0; j < M; j++) {
        if (board[i][j] == 1 && !vis[i][j]) {
          BFS(i, j);
          bug++;
        }
      }
    }
    cout << bug << '\n';

    for (int i = 0; i < N; i++) {
      fill(board[i], board[i] + M, 0);
      fill(vis[i], vis[i] + M, 0);
    }
  }
}