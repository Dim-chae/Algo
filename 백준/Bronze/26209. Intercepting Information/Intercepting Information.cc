#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    
    int N;
    char res = 'S';
    
    for (int i = 0; i < 8; i++) {
        cin >> N;
        if (N == 9) {
            res = 'F';
            break;
        }
    }
    cout << res;
}