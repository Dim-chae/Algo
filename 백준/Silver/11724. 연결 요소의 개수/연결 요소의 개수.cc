#include <bits/stdc++.h>
using namespace std;

bool graph[1001][1001];
bool vis[1001];

int N, M, cnt;

void dfs(int v) {
    vis[v] = 1;
    for (int i = 1; i <= N; i++) {
        if (graph[v][i] && !vis[i]) dfs(i);
    }
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    cin >> N >> M;

    while (M--) {
        int u, v;
        cin >> u >> v;
        graph[u][v] = 1;
        graph[v][u] = 1;
    }

    for (int i = 1; i <= N; i++) {
        if (!vis[i]) {
            dfs(i);
            cnt++;
        }
    }

    cout << cnt;
}