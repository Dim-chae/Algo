#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int N, K;
    cin >> N >> K;

    int arr[11];

    for (int i = 0; i < N; i++)
        cin >> arr[i];

    int cnt = 0;

    for (int i = N - 1; i >= 0; i--) {
        while (K >= arr[i]) {
            K -= arr[i];
            cnt++;
        }
    }
    cout << cnt;
}