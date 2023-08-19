#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;

    float rate;

    if (s[0] == 'A') rate = 4.0;
    else if (s[0] == 'B') rate = 3.0;
    else if (s[0] == 'C') rate = 2.0;
    else if (s[0] == 'D') rate = 1.0;
    else rate = 0.0;

    if (s[1] == '+') rate += 0.3;
    else if (s[1] == '-') rate -= 0.3;

    cout.precision(1);
    cout << fixed << rate;
}
