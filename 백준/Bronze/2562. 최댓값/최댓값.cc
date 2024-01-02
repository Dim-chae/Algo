#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int arr[9], max, idx;

    for (int i = 0; i < 9; i++)
        cin >> arr[i];
    
    for (int i = 0; i < 9; i++) {
        if (i == 0 || arr[i] > max) {
            max = arr[i];
            idx = i;
        }
    }
    cout << max << '\n' << idx + 1;
}