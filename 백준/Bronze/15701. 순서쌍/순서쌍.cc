#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int N;
    cin >> N;

    int cnt = 0;
    
    for (int i = 1; i * i <= N; i++) {
        if (N % i == 0) {
            cnt += 2;
            if (i * i == N) cnt--;
        }
    }

    cout << cnt;
}