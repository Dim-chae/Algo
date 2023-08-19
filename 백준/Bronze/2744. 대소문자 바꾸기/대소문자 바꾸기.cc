#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;

    for (auto& i : s) {
        if (i >= 'A' && i <= 'Z')
            i += 32;
        else if (i >= 'a' && i <= 'z')
            i -= 32;
        }

    cout << s;
}