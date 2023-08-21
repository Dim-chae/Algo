#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string n;
    int b, res = 0;
    cin >> n >> b;

    for (auto i : n){
        if (i >= '0' && i <= '9')
            res = res * b + (i - '0');
        else
            res = res * b + (i - 'A' + 10);
    }

    cout << res;
}