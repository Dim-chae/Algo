#include <bits/stdc++.h>

using namespace std;

#define X first
#define Y second

string board[101];
bool vis[101][101];

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

int N;

void BFS(int x, int y) {
    queue<pair<int, int>> Q;
    Q.push({x, y});
    vis[x][y] = 1;

    while (!Q.empty()) {
        pair<int, int> cur = Q.front(); Q.pop();
        
        for (int dir = 0; dir < 4; dir++) {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];

            if (nx < 0 || nx >= N || ny < 0 || ny >= N) continue;
            if (vis[nx][ny] || board[nx][ny] != board[x][y]) continue;

            Q.push({nx, ny});
            vis[nx][ny] = 1;
        }
    }    
}

int area() {
    int cnt = 0;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (!vis[i][j]) {
                BFS(i, j);
                cnt++;
            }
        }
    }
    return cnt;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int r = 0, nr = 0;

    cin >> N;

    for (int i = 0; i < N; i++)
        cin >> board[i];    

    r = area();

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            if (board[i][j] == 'R') board[i][j] = 'G';

    for (int i = 0; i < N; i++)
        fill(vis[i], vis[i] + N, false);

    nr = area();

    cout << r << ' ' << nr;
}