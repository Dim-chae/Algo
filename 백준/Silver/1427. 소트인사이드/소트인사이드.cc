#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string n;
    cin >> n;
    int arr[10];

    int len = n.length();

    for (int i = 0; i < len; i++)
        arr[i] = (int)n[i] - '0';

    sort(arr, arr + len, greater<>());

    for (int i = 0; i < len; i++)
        cout << arr[i];
}