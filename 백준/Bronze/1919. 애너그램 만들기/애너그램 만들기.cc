#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int alp[26] = {0, };
    int res = 0;
    
    string s1, s2;
    cin >> s1 >> s2;

    for (int i = 0; i < s1.length(); i++)
        alp[s1[i] - 'a']++;

    for (int i = 0 ; i < s2.length(); i++)
        alp[s2[i] - 'a']--;

    for (auto i : alp) {
        if (i != 0) {
            res += abs(i);
        }
    }

    cout << res;
}