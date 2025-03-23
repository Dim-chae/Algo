#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    string S, sub;
    cin >> S;

    set<string> part;

    for (int i = 0; i < S.length(); i++) {
        for (int j = 1; j <= S.length(); j++) {
            sub = S.substr(i, j);
            part.insert(sub);
        }
    }
    cout << part.size();
}