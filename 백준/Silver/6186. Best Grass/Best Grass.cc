#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

bool field[101][101];
bool vis[101][101];

void bfs(int i, int j, int R, int C) {
    queue<pair<int, int>> Q;
    Q.push({i, j});
    vis[i][j] = 1;

    while (!Q.empty()) {
        auto cur = Q.front(); Q.pop();
        
        for (int dir = 0; dir < 4; dir++) {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];

            if (nx < 0 || nx >= R || ny < 0 || ny >= C) continue;
            if (!field[nx][ny] || vis[nx][ny]) continue;

            Q.push({nx, ny});
            vis[nx][ny] = 1;
        }
    }
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int R, C;
    cin >> R >> C;

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            char c;
            cin >> c;
            field[i][j] = (c == '#');
        }
    }

    int cnt = 0;
    
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            if (field[i][j] && !vis[i][j]) {
                cnt++;
                bfs(i, j, R, C);
            }
        }
    }
    
    cout << cnt;
}