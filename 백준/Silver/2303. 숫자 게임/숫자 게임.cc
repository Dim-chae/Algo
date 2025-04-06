#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int N;
    cin >> N;

    int cards[1001][6];
    int total[1001];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> cards[i][j];
            total[i] += cards[i][j];
        }
    }

    for (int i = 0; i < N; i++) {
        int sum = 0;
        for (int j = 0; j < 5; j++) {
            for (int k = j + 1; k < 5; k++) {
                int calc = (total[i] - cards[i][j] - cards[i][k]) % 10;
                if (sum < calc) sum = calc;
            }
        }
        total[i] = sum;
    }

    int mx = 0, winner;

    for (int i = 0; i < N; i++) {
        if (mx <= total[i]) {
            mx = total[i];
            winner = i + 1;
        }
    }
    
    cout << winner;
}