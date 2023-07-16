#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, sum = 0;
    cin >> n;

    char arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += (int(arr[i]) - '0');
    }

    cout << sum;
}