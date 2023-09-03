#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int card[20], tmp;

    for (int i = 1; i <= 20; i++)
        card[i - 1] = i;

    for (int i = 0; i < 10; i++) {
        int a, b;
        cin >> a >> b;

        for (int j = 0; j < (b - a) / 2 + 1; j++) {
            tmp = card[a + j - 1];
            card[a + j - 1] = card[b - j - 1];
            card[b - j - 1] = tmp;
        }
    }

    for (int i = 0; i < 20; i++)
        cout << card[i] << ' ';
}