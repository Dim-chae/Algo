#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int W, N, P;
    cin >> W >> N >> P;

    int hit, cnt = 0;

    while (P--) {
        cin >> hit;
        if (hit >= W && hit <= N) cnt++;
    }
    
    cout << cnt;
}