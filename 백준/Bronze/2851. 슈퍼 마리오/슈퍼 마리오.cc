#include <bits/stdc++.h>
using namespace std;

int score[10];

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    for (int i = 0; i < 10; i++)
        cin >> score[i];

    int n = 0, p = 0;
    
    for (int i = 0; i < 10; i++) {
        p = n;
        n += score[i];
        
        if (n >= 100) {
            if (n - 100 <= 100 - p) cout << n;
            else cout << p;
            return 0;
        }
    }
    cout << n;
}