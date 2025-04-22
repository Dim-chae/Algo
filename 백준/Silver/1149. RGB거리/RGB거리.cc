#include <bits/stdc++.h>
using namespace std;

int R[1001], G[1001], B[1001];
int dp[1001][3];
int N;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    cin >> N;

    for (int i = 1; i <= N; i++)
        cin >> R[i] >> G[i] >> B[i];

    dp[1][0] = R[1], dp[1][1] = G[1], dp[1][2] = B[1];
    int res = 0;

    for (int i = 2; i <= N; i++) {
        dp[i][0] = min(dp[i - 1][1], dp[i - 1][2]) + R[i]; 
        dp[i][1] = min(dp[i - 1][0], dp[i - 1][2]) + G[i];
        dp[i][2] = min(dp[i - 1][0], dp[i - 1][1]) + B[i];
    }
    cout << min({dp[N][0], dp[N][1], dp[N][2]});
}