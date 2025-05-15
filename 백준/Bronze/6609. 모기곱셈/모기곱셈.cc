#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int M, P, L, E, R, S, N;

    while (cin >> M >> P >> L >> E >> R >> S >> N) {
        while (N--) { 
             int la = M * E, pu = L / R, mo = P / S;
             L = la, P = pu, M = mo;
        }
        cout << M << '\n';
    }
}