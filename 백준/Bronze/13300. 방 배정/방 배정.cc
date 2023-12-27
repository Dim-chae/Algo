#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n, k, s, y, room = 0;
    cin >> n >> k;
    int stu[2][6] = {};

    for (int i = 0; i < n; i++) {
        cin >> s >> y;
        stu[s][y - 1]++;
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 6; j++) {
            room += ceil((double)stu[i][j] / k);
        }
    }
    cout << room;
}