#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int set[6] = {1, 1, 2, 2, 2, 8};
    int pie[6];

    for (int i = 0; i < 6; i++) {
        cin >> pie[i];
        cout << set[i] - pie[i] << ' ';
    }
}