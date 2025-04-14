#include <bits/stdc++.h>
using namespace std;

int cnt = 0;

void move(int a, int b, int c) {
    int g1 = b - a, g2 = c - b;
    if (g1 <= 1 && g2 <= 1) cout << cnt;
    else {
        cnt++;
        if (g1 < g2) move(b, b + 1, c);
        else move(a, a + 1, b);
    } 
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int A, B, C;
    cin >> A >> B >> C;
    move(A, B, C);
}