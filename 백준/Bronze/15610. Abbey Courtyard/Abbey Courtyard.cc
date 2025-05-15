#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    
    long long a;
    cin >> a;

    long double res = sqrt(a) * 4;
    cout << fixed << setprecision(8) << res;
}