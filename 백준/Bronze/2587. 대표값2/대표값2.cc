#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    
    int arr[5], total = 0;

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
        total += arr[i];
    }

    sort(arr, arr + 5);

    cout << total / 5 << '\n' << arr[2];
}