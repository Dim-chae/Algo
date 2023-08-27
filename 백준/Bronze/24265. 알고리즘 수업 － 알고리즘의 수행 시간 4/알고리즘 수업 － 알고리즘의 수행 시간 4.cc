#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long int n;
    cin >> n;

    long long int cnt = 0;

    for (int i = 1; i <= n-1; i++)
        for (int j = i + 1; j <= n; j++)
            cnt++;

    cout << cnt << '\n';
    cout << 2;
}