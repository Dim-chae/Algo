#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m, tmp, total, mx = 0;
    vector<int> c;

    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> tmp;
        c.push_back(tmp);
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                total = c[i] + c[j] + c[k];
                if (total > m)
                    continue;
                if (mx < total)
                    mx = total;
            }
        }
    }
    
    cout << mx;
}