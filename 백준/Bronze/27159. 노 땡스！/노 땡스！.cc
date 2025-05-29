#include <bits/stdc++.h>
using namespace std;

int cards[34];

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
        cin >> cards[i];

    int res = cards[0];

    for (int i = 1; i < N; i++) {
        if (cards[i] - cards[i - 1] == 1) continue;
        res += cards[i];
    }

    cout << res;
}