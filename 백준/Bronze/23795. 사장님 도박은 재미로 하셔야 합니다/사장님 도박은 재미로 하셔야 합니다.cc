#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n, ans = 0;
    
    while (true) {
        cin >> n;
        if (n == -1) break;
        ans += n;
    }
    cout << ans;
}