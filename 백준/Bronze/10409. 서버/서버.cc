#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n, T;
    cin >> n >> T;

    queue<int> Q;

    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        Q.push(tmp);
    }

    int cnt = 0;

    for (int i = 0; i < n; i++) {
        if (T - Q.front() < 0) break;
        T -= Q.front();
        Q.pop();
        cnt++;
    }
    
    cout << cnt;
}