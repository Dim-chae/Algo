#include <bits/stdc++.h>
using namespace std;

bool graph[1001][1001];
bool vis[1001];

int N, M, V;

void dfs(int v) {
    vis[v] = 1;
    cout << v << ' ';
    for (int i = 1; i <= N; i++)
        if (graph[v][i] && !vis[i])
            dfs(i);
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    cin >> N >> M >> V;

    while (M--) {
        int a, b;
        cin >> a >> b;
        graph[a][b] = 1;
        graph[b][a] = 1;
    }

    dfs(V);
    cout << '\n';

    fill(vis, vis + 1001, 0);

    queue<int> Q;
    Q.push(V);
    vis[V] = 1;

    while (!Q.empty()) {
        int cur = Q.front(); Q.pop();
        cout << cur << ' ';
        
        for (int i = 1; i <= N; i++) {
            if (graph[cur][i] && !vis[i]) {
                vis[i] = 1;
                Q.push(i);
            }
        }
    }
}