#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a[26] = {};
    int cnt = 0, max = 0;
    char res;

    string s;
    cin >> s;

    for (auto i : s){
        if (i >= 'a')
            a[i - 'a']++;
        else
            a[i - 'A']++;
    }

    for (int i = 0; i < 26; i++){
        if (max < a[i]) {
            max = a[i];
            res = 'A' + i;
        }
        else if (max == a[i])
            res = '?';
        }

    cout << res;
    }