#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    
    int alp[26] = {0, };

    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++)
        alp[s[i] - 'a']++;

    for (auto i : alp)
        cout << i << ' ';
}