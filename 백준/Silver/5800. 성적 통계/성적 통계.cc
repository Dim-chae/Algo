#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int k;
    cin >> k;
    int arr[51];

    for (int i = 1; i <= k; i++) {
        int n;
        cin >> n;

        for (int j = 0; j < n; j++)
            cin >> arr[j];

        sort(arr, arr + n, greater<int>());

        cout << "Class " << i << '\n';
        cout << "Max " << arr[0] << ", ";
        cout << "Min " << arr[n - 1] << ", ";

        int gap, largest = 0;

        for (int j = 1; j < n; j++) {
            gap = arr[j - 1] - arr[j];
            if (largest < gap)
                largest = gap;
        }
        cout << "Largest gap " << largest << '\n';
    }
}