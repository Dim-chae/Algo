#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    set<string> W = {"i", "pa", "te", "ni", "niti", "a", "ali", "nego", "no", "ili"};
    queue<string> Q;

    string s;
    char c;

    while (true) {
        cin >> s;
        if (cin.eof()) break;
        Q.push(s);
    }

    s = Q.front();
    cout << char(toupper(s[0]));
    Q.pop();

    while (!Q.empty()) {
        bool isItUseless = 0;
        s = Q.front();
        if (W.find(s) == W.end())
            cout << char(toupper(s[0]));
        Q.pop();
    }
}