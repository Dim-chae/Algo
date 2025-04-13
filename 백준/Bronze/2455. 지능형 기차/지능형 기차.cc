#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int total = 0, max = 0;

    for (int i = 0; i < 4; i++) {
        int off, on;
        cin >> off >> on;
        total += (on - off);

        if (max < total) max = total;
    }
    
    cout << max;
}