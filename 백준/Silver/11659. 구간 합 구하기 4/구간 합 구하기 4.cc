#include <bits/stdc++.h>
using namespace std;

int arr[100001], sum[100001];

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int N, M;
    cin >> N >> M;

    cin >> arr[0];
    sum[0] = arr[0];

    for (int i = 1; i < N; i++) {
        cin >> arr[i];
        sum[i] = sum[i - 1] + arr[i];
    }

    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;

        if (a == 1) cout << sum[b - 1] << '\n';
        else cout << sum[b - 1] - sum[a - 2] << '\n';
    }
}