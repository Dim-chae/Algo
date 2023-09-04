#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >> n >> k;

    int score[1000];

    for (int i = 0; i < n; i++)
        cin >> score[i];

    int tmp;

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (score[i] < score[j]) {
                tmp = score[i];
                score[i] = score[j];
                score[j] = tmp;
            }
        }
    }
    cout << score[k - 1];
}