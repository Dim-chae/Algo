#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, cnt[31] = {};

    for (int i = 0; i < 28; i++){
        cin >> n;
        cnt[n] = 1;
    }

    for (int i = 1; i <= 30; i++)
        if (!cnt[i]) cout << i << '\n';
}