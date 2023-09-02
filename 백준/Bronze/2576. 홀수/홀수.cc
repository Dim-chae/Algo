#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int num[7], min, odd = 0;

    for (int i = 0; i < 7; i++) {
        cin >> num[i];

        if (num[i] % 2 == 1) {
            odd += num[i];

            if (odd == num[i])
                min = num[i];

            else if (num[i] < min)
                min = num[i];
        }
    }
    if (odd == 0)
        cout << -1;
    else
        cout << odd << '\n' << min;
}