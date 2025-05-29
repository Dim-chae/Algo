#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    
    int x1, y1, r1, x2, y2, r2;
    cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

    if (r1 + r2 > sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2))) cout << "YES";
    else cout << "NO";
}