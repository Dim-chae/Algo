#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    string s;
    cin >> s;

    int ny = 0, yy = 0;

    for (int i = 0; i < s.length(); i++) {
        char c = s[i];
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            ny++;
        else if (c == 'y')
            yy++;
    }
    yy += ny;

    cout << ny << ' ' << yy;
}