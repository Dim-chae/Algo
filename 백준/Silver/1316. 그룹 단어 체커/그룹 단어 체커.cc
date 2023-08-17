#include <bits/stdc++.h>

using namespace std;

bool isGroup(string str){
    bool check[26] = {};
    
    for (int i = 0; i < str.length(); i++){
        if (i > 0 && str[i] != str[i-1])
            if (check[str[i] - 'a']) return false;
        check[str[i] - 'a'] = true;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, cnt = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;

        if (isGroup(str)) cnt++;
    }

    cout << cnt;
}