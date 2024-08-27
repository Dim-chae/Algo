#include <bits/stdc++.h>

using namespace std;

#define X first
#define Y second

int dist[305][305];

int dx[8] = {-2, -1, 1, 2, -2, -1, 1, 2};
int dy[8] = {1, 2, 2, 1, -1, -2, -2, -1};

int L, cu_x, cu_y, de_x, de_y;
queue<pair<int, int>> Q;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int T;
    cin >> T;

    while (T--) {
        cin >> L >> cu_x >> cu_y >> de_x >> de_y;

        for (int i = 0; i < L; i++)
            fill(dist[i], dist[i] + L, -1);

        Q.push({cu_x, cu_y});
        dist[cu_x][cu_y] = 0;

        while (!Q.empty()) {
            pair<int, int> cur = Q.front(); Q.pop();

            for (int dir = 0; dir < 8; dir++) {
                int nx = cur.X + dx[dir];
                int ny = cur.Y + dy[dir];

                if (nx < 0 || nx >= L || ny < 0 || ny >= L) continue;
                if (dist[nx][ny] != -1) continue;

                Q.push({nx, ny});
                dist[nx][ny] = dist[cur.X][cur.Y] + 1;
            }
        }
        cout << dist[de_x][de_y] << '\n';
    }
}