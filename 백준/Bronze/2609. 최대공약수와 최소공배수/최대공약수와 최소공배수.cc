#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int a, b;
    cin >> a >> b;

    int max;

    for (int i = 1; i <= a; i++) {
        if (a % i == 0 && b % i == 0)
            max = i;
    }

    int min = (a * b) / max;

    cout << max << '\n' << min;
}