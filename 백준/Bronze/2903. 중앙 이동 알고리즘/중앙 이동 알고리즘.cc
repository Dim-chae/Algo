#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int dot = 2;
    int n;
    cin >> n;

    while (n--)
        dot = dot * 2 - 1;

    cout << dot * dot;
}