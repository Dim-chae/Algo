#include <bits/stdc++.h>
using namespace std;

int wine[10001];
int dp[10001];

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int N;
    cin >> N;

    for (int i = 1; i <= N; i++)
        cin >> wine[i];

    dp[0] = 0, dp[1] = wine[1], dp[2] = wine[1] + wine[2];

    for (int i = 3; i <= N; i++)
        dp[i] = max({dp[i - 2] + wine[i], dp[i - 3] + wine[i - 1] + wine[i], dp[i - 1]});

    cout << dp[N];
}