#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    if (a % b == 0) return b;
    else return gcd(b, a % b);
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int T;
    cin >> T;

    while (T--) {
        int A, B;
        cin >> A >> B;

        if (A < B) {
            int tmp = A;
            A = B;
            B = tmp;
        }

        cout << (A * B) / gcd(A, B) << '\n';
    }
}