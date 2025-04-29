#include <bits/stdc++.h>
using namespace std;

int stairs[301];
int dp[301];

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int N;
    cin >> N;

    for (int i = 1; i <= N; i++)
        cin >> stairs[i];

    dp[1] = stairs[1], dp[2] = stairs[1] + stairs[2];
    dp[3] = max(stairs[1], stairs[2]) + stairs[3];

    for (int i = 4; i <= N; i++)
        dp[i] = max(dp[i - 2], dp[i - 3] + stairs[i - 1]) + stairs[i];
    
    cout << dp[N];
}