#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    string S;
    cin >> S;

    int n;
    n = ((S[0] & 255) - 234) * 4096 + ((S[1] & 255) - 176) * 64 + (S[2] & 255) - 127;
    
    cout << n;
}