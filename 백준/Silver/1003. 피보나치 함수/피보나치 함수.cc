#include <bits/stdc++.h>

using namespace std;

#define F first
#define S second

pair<int, int> memo[41];

pair<int, int> fib(int N) {
    if (N == 0)
        return {1, 0};
    else if (N == 1)
        return {0, 1};
    else if (memo[N].F != -1 && memo[N].S != -1) return memo[N];
    else {
        pair<int, int> fib1 = fib(N - 1);
        pair<int, int> fib2 = fib(N - 2);
        return memo[N] = {fib1.F + fib2.F, fib1.S + fib2.S};
    }
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int T;
    cin >> T;

    while (T--) {
        memset(memo, -1, sizeof(memo));
        
        int N;
        cin >> N;

        pair<int, int> res = fib(N);
        cout << res.F << ' ' << res.S << '\n';
    }
}