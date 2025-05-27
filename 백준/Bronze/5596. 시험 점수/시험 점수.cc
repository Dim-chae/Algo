#include <bits/stdc++.h>
using namespace std;

int S, T;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    
    int tmp;
    
    for (int i = 0; i < 8; i++) {
        cin >> tmp;
        if (i < 4) S += tmp;
        else T += tmp;
    }
    
    int result = (S > T) ? S : T;
    cout << result;
}