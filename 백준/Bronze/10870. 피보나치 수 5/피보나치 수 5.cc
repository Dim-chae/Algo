#include <bits/stdc++.h>
using namespace std;

int dp[20];

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int N;
    cin >> N;

    dp[0] = 0, dp[1] = 1;

    for (int i = 2; i <= N; i++)
        dp[i] = dp[i - 1] + dp[i - 2];

    cout << dp[N];
}