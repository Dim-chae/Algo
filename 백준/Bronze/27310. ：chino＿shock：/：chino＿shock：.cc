#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    string emo;
    cin >> emo;

    int dif = emo.length() + 2;

    for (auto i : emo)
        if (i == '_') dif += 5;
    
    cout << dif;
}