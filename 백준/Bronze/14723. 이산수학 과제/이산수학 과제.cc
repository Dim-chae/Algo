#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int N;
    cin >> N;

    int i = 1;

    while (i * (i + 1) / 2 < N) i++;

    int b = N - i * (i - 1) / 2;
    int a = i + 1 - b;

    cout << a << ' ' << b;
}