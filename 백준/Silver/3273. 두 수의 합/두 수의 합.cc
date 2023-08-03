#include <bits/stdc++.h>

using namespace std;

int num[100000];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x, cnt = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> num[i];

    cin >> x;

    sort(num, num + n);

    int start = 0, end = n-1;

    while (start < end) {
        int tmp = num[start] + num[end];
        if (tmp < x) {
            start++;
        }
        else if (tmp > x) {
            end--;
        }
        else {
            start++; end--; cnt++;
        }
    }

    cout << cnt;

}