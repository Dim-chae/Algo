#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n;
    cin >> n;

    long long t[36] = {0, };

    t[0] = 1;

    for (int i = 1; i < 36; i++)
        for (int j = 0; j < i; j++)
            t[i] += t[j] * t[i - j - 1];

    cout << t[n];
}