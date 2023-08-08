#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x;
    cin >> n >> x;

    int a[n];

    for (int i = 0; i < n; i++){
        cin >> a[i];
        if (x > a[i])
            cout << a[i] << ' ';
    }
}