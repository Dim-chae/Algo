#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a1, a0, c, n0;
    bool doesItSatisfy = 0;
    cin >> a1 >> a0 >> c >> n0;

    for (int n = n0; n <= 100; n++) {
        if ((a1 * n + a0) <= c * n)
            doesItSatisfy = 1;
        else {
            doesItSatisfy = 0;
            break;
        }
    }
    cout << doesItSatisfy;
}