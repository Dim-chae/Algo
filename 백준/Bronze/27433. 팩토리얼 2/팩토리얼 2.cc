#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int N;
    cin >> N;

    long long res = 1;

    for (int i = 2; i <= N; i++)
        res *= i;

    cout << res;
}