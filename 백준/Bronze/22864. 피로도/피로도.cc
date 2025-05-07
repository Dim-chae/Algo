#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int A, B, C, M;
    cin >> A >> B >> C >> M;

    int fa = 0, wo = 0;

    for (int i = 0; i < 24; i++) {
        if (fa + A <= M) {
            wo += B;
            fa += A;
        }
        else if (fa - C < 0) fa = 0;
        else fa -= C;
    }

    cout << wo;
}