#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, tmp;
    cin >> n;
    int arr[10001] = {};

    for (int i = 0; i < n; i++) {
        cin >> tmp;
        arr[tmp]++;
    }

    for (int i = 0; i < 10001; i++) {
        if (arr[i] > 0) {
            for (int j = 0; j < arr[i]; j++)
                cout << i << '\n';
        }
    }
}