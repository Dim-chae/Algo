#include <bits/stdc++.h>

using namespace std;

int factorial(int n) {
    int sum = 1;
    for (int i = 2; i <= n; i++) {
        sum *= i;
    }
    return sum;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int N, K;
    cin >> N >> K;
    
    int res = factorial(N) / (factorial(N - K) * factorial(K));
    cout << res;
}