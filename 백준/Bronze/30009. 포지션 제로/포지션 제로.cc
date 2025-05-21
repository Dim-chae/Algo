#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int N, X, Y, R;
    cin >> N >> X >> Y >> R;

    int in_cn = 0, bn_cn = 0;

    while (N--) {
        int T;
        cin >> T;

        if (T > X - R && T < X + R) in_cn++;
        else if (T == X - R || T == X + R) bn_cn++; 
    }

    cout << in_cn << ' ' << bn_cn;
}