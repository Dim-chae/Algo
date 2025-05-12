#include <bits/stdc++.h>
using namespace std;

bool isPrime[246913];

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    fill(isPrime, isPrime + 246913, 1);
    isPrime[0] = isPrime[1] = 0;

    for (int i = 2; i * i <= 246912; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= 246912; j += i)
                isPrime[j] = 0;
        }
    }
    while (1) {
        int n, cnt = 0;
        cin >> n;

        if (n == 0) break;

        for (int i = n + 1; i <= 2 * n; i++)
            if (isPrime[i]) cnt++;

        cout << cnt << '\n';
    }
}