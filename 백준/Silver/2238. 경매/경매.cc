#include <bits/stdc++.h>
using namespace std;

#define f first
#define s second

int p[10001];

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int U, N;
    cin >> U >> N;

    vector<pair<string, int>> v(N);

    for (int i = 0; i < N; i++) {
        cin >> v[i].f >> v[i].s;
        p[v[i].s]++;
    }

    int min_pri = 10001;
    int min_cnt = N + 1;
    
    for (int i = 1; i <= U; i++) {
        if (p[i] > 0) {
            if (p[i] < min_cnt || (p[i] == min_cnt && i < min_pri)) {
                min_cnt = p[i];
                min_pri = i;
            }
        }
    }

    for (int i = 0; i < N; i++) {
        if (v[i].s == min_pri) {
            cout << v[i].f << ' ' << v[i].s << '\n';
            break;
        }
    }
}