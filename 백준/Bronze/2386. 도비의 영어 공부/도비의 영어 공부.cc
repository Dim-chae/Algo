#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    
    char c;
    string s;
    
    while (1) {
        cin >> c;
        if (c == '#') return 0;
        
        cin.ignore();
        getline(cin, s);
        
        int cnt = 0;
        
        for (auto i : s)
            if (i == c || i == toupper(c)) cnt++;
        
        cout << c << ' ' << cnt << '\n';
    }
}