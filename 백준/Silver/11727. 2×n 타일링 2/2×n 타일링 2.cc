#include <bits/stdc++.h>
using namespace std;

int dp[1001];

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int N;
    cin >> N;

    dp[1] = 1, dp[2] = 3;

    for (int i = 3; i <= N; i++)
        dp[i] = (dp[i - 2] * 2 + dp[i - 1]) % 10007;

    cout << dp[N];
}