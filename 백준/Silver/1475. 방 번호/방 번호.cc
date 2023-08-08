#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int count[10] = {};

    int n, res = 0;
    cin >> n;

    string s = to_string(n);

    for (auto i : s)
        count[i - '0']++;

    for (int i = 0; i < 10; i++){
        if (i == 6 || i == 9)
            continue;
        res = max(res, count[i]);
    }
    
    res = max(res, (count[6] + count[9] + 1) / 2);
    cout << res;
}