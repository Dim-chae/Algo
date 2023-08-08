#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int count[10] = {};

    int a, b, c;
    cin >> a >> b >> c;

    string s = to_string(a * b * c);

    for (auto i : s)
        count[i - '0']++;

    for (auto i : count)
        cout << i << '\n';
}