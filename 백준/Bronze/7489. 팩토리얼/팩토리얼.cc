#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        int N;
        cin >> N;

        if (N == 0) {
            cout << 0 << '\n';
            continue;
        }

        int calc = 1;
        
        for (int j = 1; j <= N; j++) {
            calc *= j;
            calc %= 1000000;

            while (calc % 10 == 0) calc /= 10;
        }
        cout << calc % 10 << '\n';
    }
}