#include <bits/stdc++.h>
using namespace std;
    
#define MX 100001

int N;

bool vis[MX];
int parents[MX];
vector<int> v[MX];

void dfs(int n) {
    vis[n] = 1;

    for (int i = 0; i < v[n].size(); i++) {
        int node = v[n][i];
        if (!vis[node]) {
            parents[node] = n;
            dfs(node);
        }
    }
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    cin >> N;

    for (int i = 0; i < N; i++) {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    dfs(1);

    for (int i = 2; i <= N; i++) 
        cout << parents[i] << '\n';
}