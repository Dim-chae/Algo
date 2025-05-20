#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int N, M;
    cin >> N >> M;

    vector<int> woods(N);
    
    for (int i = 0; i < N; i++)
        cin >> woods[i];
    
    sort(woods.begin(), woods.end());

    int left = 0, right = woods[N - 1], result = 0;

    while (left <= right) {
        int mid = (left + right) / 2;
        long long sum = 0;

        for (int i = 0; i < N; i++)
            if (woods[i] > mid) sum += woods[i] - mid;

        if (sum >= M) {
            result = mid;
            left = mid + 1;
        }
        else right = mid - 1;
    }
    
    cout << result;    
}