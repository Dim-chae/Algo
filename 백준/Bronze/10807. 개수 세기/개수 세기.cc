#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, v, cnt = 0;
    cin >> n;

    int num[100];

    for (int i = 0; i < n; i++)
        cin >> num[i];

    cin >> v;

    for (int i = 0; i < n; i++) {
        if (num[i] == v)
            cnt++;
    }
    
    cout << cnt;
}