#include <bits/stdc++.h>
using namespace std;

bool isPrime[1000001];

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int M, N;
    cin >> M >> N;

    fill(isPrime, isPrime + 1000001, 1);
    isPrime[0] = isPrime[1] = 0;

    for (int i = 2; i <= N; i++) {
        if (isPrime[i]) {
            for (int j = i * 2; j <= N; j += i)
                isPrime[j] = 0;
        }
    }

    for (int i = M; i <= N; i++)
        if (isPrime[i]) cout << i << '\n';
}