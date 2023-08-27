#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int arr[3];

    for (int i = 0; i < 3; i++)
        cin >> arr[i];

    sort(arr, arr+3);

    if (arr[0] == arr[1] && arr[1] == arr[2])
        cout << arr[0] * 3;
    else if (arr[1] == arr[2] || arr[0] + arr[1] > arr[2])
        cout << arr[0] + arr[1] + arr[2];
    else
        cout << (arr[0] + arr[1]) * 2 - 1;
}