#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    
    int T;
    cin >> T;
    
    while (T--) {
        string s;
        cin >> s;
        
        int cnt = 0;
        
        for (auto i : s) {
            if (i == 'D') break;
            cnt++;
        }
        
        cout << cnt << '\n';
    }
}