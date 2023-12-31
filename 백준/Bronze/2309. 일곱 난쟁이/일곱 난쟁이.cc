#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    
    int h[9], total = 0;
    
    for (int i = 0; i < 9; i++) {
        cin >> h[i];
        total += h[i];
    }

    sort(h, h + 9);
    
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (total - h[i] - h[j] == 100) {
                for (int k = 0; k < 9; k++) {
                    if (h[k] != h[i] && h[k] != h[j])
                        cout << h[k] << '\n';
                }
                return 0;
            }
        }
    }
    return 0;
}