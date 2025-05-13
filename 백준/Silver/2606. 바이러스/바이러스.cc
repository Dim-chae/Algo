#include <bits/stdc++.h>
using namespace std;

bool com[101][101];
bool vis[101];

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int N, M;
    cin >> N >> M;

    int a, b;

    while (M--) {
        cin >> a >> b;
        com[a][b] = 1;
        com[b][a] = 1;
    }

    queue<int> Q;
    Q.push(1);
    vis[1] = 1;

    int cnt = 0;

    while (!Q.empty()) {
        int cur = Q.front(); Q.pop();
        
        for (int i = 2; i <= N; i++) {
            if (vis[i] || !com[cur][i]) continue;
            
            Q.push(i);
            vis[i] = 1;
            cnt++;
        }
    }
    cout << cnt;
}