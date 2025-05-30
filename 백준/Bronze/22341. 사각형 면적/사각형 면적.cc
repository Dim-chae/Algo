#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int N, C;
    cin >> N >> C;

    int A = N, B = N;

    while (C--) {
        int X, Y;
        cin >> X >> Y;

        if (X >= A || Y >= B) continue;
        
        if (X * B >= A * Y) A = X;
        else B = Y;
    }

    cout << A * B;
}