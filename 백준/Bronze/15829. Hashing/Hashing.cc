#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int L;
    cin >> L;

    long long int M = 1234567891;
    long long int r = 1;
    long long int total = 0;
 
    string s;
    cin >> s;

    for (int i = 0; i < L; i++) {
        total += (s[i] - 96) * r % M;
        r = r * 31 % M;
    }
    cout << total % M;
}