#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int x, n, total = 0;
    cin >> x >> n;

    for (int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        total += (a * b);
    }

    if (total == x)
        cout << "Yes";
    else
        cout << "No";
}