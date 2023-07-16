#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int num, max;
    int arr[9];

    for (int i = 0; i < 9; i++)
        cin >> arr[i];

    max = arr[0];

    for (int j = 0; j < 9; j++)
        if (arr[j] >= max) {
            max = arr[j];
            num = j+1;
        }

    cout << max << '\n' << num;
}