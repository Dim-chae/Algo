#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int num[26] = {};
    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++)
        num[s[i] - 'a']++;

    for (int i = 0; i < 26; i++)
        cout << num[i] << ' ';
}
