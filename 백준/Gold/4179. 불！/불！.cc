#include <bits/stdc++.h>

using namespace std;

#define X first
#define Y second

string maze[1002];
int jd[1002][1002];
int fd[1002][1002];

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int N, M;
    cin >> N >> M;

    for (int i = 0; i < N; i++)
        cin >> maze[i];

    queue<pair<int, int>> J;
    queue<pair<int, int>> F;

    for (int i = 0; i < N; i++) {
        fill(jd[i], jd[i] + M, -1);
        fill(fd[i], fd[i] + M, -1);
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (maze[i][j] == 'J') {
                J.push({i, j});
                jd[i][j] = 0;
            }
            if (maze[i][j] == 'F') {
                F.push({i, j});
                fd[i][j] = 0;
            }
        }
    }

    while (!F.empty()) {
        pair<int, int> cur = F.front(); F.pop();

        for (int dir = 0; dir < 4; dir++) {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];

            if (nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
            if (maze[nx][ny] == '#' || fd[nx][ny] >= 0) continue;

            fd[nx][ny] = fd[cur.X][cur.Y] + 1;
            F.push({nx, ny});
        }
    }

    while (!J.empty()) {
        pair<int, int> cur = J.front(); J.pop();

        for (int dir = 0; dir < 4; dir++) {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];

            if (nx < 0 || nx >= N || ny < 0 || ny >= M) {
                cout << jd[cur.X][cur.Y] + 1;
                return 0;
            }
            if (maze[nx][ny] == '#' || jd[nx][ny] >= 0) continue;
            if (fd[nx][ny] != -1 && fd[nx][ny] <= jd[cur.X][cur.Y] + 1) continue;

            jd[nx][ny] = jd[cur.X][cur.Y] + 1;
            J.push({nx, ny});
        }
    }
    cout << "IMPOSSIBLE";
}