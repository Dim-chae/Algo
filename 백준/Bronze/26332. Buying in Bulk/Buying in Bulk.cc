#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    
    int N;
    cin >> N;

    while (N--) {
        int c, p;
        cin >> c >> p;
        cout << c << ' ' << p << '\n';
        cout << (p * c) - ((c - 1) * 2) << '\n';
    }
}