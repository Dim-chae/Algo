#include <bits/stdc++.h>

using namespace std;

int dist[200002];

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int N, K;
    cin >> N >> K;

    fill(dist, dist + 200001, -1);

    queue<int> Q;
    Q.push(N);
    dist[N] = 0;

    while (dist[K] == -1) {
        int cur = Q.front(); Q.pop();

        for (int nxt : {cur - 1, cur + 1, cur * 2}) {
            if (nxt < 0 || nxt >= 200000) continue;
            if (dist[nxt] != -1) continue;

            dist[nxt] = dist[cur] + 1;
            Q.push(nxt);
        }
    }
    cout << dist[K];
}