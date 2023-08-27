#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long int n;
    cin >> n;

    long long int cnt = 0;

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            for (int k = 1; k <= n; k++)
                cnt++;

    cout << cnt << '\n';
    cout << 3;
}