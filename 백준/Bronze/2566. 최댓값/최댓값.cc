#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int arr[9][9] = {};
    int max = 0, r = 0, c = 0;

    for (int i = 0; i < 9; i++){
        for (int j = 0; j < 9; j++){
            cin >> arr[i][j];
            if (arr[i][j] > max) {
                max = arr[i][j];
                r = i;
                c = j;
            }
        }
    }
    cout << max << '\n' << r + 1 << ' ' << c + 1;
}