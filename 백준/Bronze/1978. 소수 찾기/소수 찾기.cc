#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int cnt = 0, res = 0;

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;

        for (int j = 1; j <= num; j++) {
            if (num % j == 0)
                cnt++;
        }
        if (cnt == 2)
            res++;

        cnt = 0;
    }

    cout << res;
}