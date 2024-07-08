#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int N, A, B;
    cin >> N >> A >> B;

    int res = A / 2 + B;

    if (res >= N) cout << N;
    else cout << res;
}