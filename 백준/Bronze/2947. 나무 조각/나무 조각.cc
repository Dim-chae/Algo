#include <bits/stdc++.h>
using namespace std;

int arr[5];

void swap() {
    for (int i = 0; i < 4; i++) {
        if (arr[i] > arr[i + 1]) {
            int tmp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = tmp;

            for (auto j : arr)
                cout << j << ' ';
            cout << '\n';
        }
    }
    for (int i = 0; i < 5; i++)
        if (arr[i] != i + 1) swap();
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    for (int i = 0; i < 5; i++)
        cin >> arr[i];

    swap();
}