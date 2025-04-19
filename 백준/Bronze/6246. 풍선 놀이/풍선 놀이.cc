#include <bits/stdc++.h>
using namespace std;

bool slots[10001];

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int N, Q, cnt = 0;
    cin >> N >> Q;

    while (Q--) {
        int L, I;
        cin >> L >> I;
        for (int i = L; i <= N; i += I) {
            if (!slots[i]) {
                slots[i] = 1;
                cnt++;
            }
        }
    }
    cout << N - cnt;
}