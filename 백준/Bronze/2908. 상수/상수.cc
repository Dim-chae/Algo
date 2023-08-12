#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string a, b, fa, fb;
    cin >> a >> b;

    for (int i = 2; i >= 0; i--){
        fa += a[i];
        fb += b[i];
    }

    if (fa > fb)
        cout << fa;
    else
        cout << fb;
}