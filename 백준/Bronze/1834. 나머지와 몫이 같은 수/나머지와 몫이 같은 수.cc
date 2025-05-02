#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int N;
    cin >> N;

    ll res = 0;

    for (ll i = 1; i < N; i++)
        res += N * i + i;

    cout << res;
}