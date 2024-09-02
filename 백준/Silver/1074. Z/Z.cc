#include <bits/stdc++.h>

using namespace std;

int Z(int N, int r, int c) {
    if (N == 0) return 0;
    int half = 1 << (N - 1);
    if (r < half && c < half) return Z(N - 1, r, c);
    if (r < half && c >= half) return half * half + Z(N - 1, r, c - half);
    if (r >= half && c < half) return 2 * half * half + Z(N - 1, r - half, c);
    return 3 * half * half + Z(N - 1, r - half, c - half);  
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int N, r, c;
    cin >> N >> r >> c;
    cout << Z(N, r, c);
}