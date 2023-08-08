#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int count[26] = {};
    string s;

    cin >> s;

    for (auto c : s)
        count[c - 'a']++;

    for (int i = 0; i < 26; i++)
        cout << count[i] << ' ';
}