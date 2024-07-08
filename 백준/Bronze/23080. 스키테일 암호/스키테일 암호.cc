#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int K;
    string S;

    cin >> K >> S;

    for (int i = 0; i < S.length(); i += K)
        cout << S[i];
}