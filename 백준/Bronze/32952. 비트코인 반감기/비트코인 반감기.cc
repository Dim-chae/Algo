#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    ll R, K, M;
    cin >> R >> K >> M;

    ll cnt = M / K;
    ll reward = R;

    for (int i = 0; i < cnt; i++) {
        reward /= 2;
        if (reward == 0) break; 
    }

    cout << reward;
}