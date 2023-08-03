#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    int m;
    char temp;

    cin >> str;
    cin >> m;

    list<char> l;

    for (auto temp: str)
        l.push_back(temp);
    auto cur = l.end();

    while(m--) {
        char com;
        cin >> com;

        if (com == 'L') {
            if (cur != l.begin())
                cur--;
        }
        else if (com == 'D') {
            if (cur != l.end())
                cur++;
        }
        else if (com == 'B') {
            if (cur != l.begin()){
                cur--;
                cur = l.erase(cur);
            }
        }
        else {
            cin >> temp;
            l.insert(cur, temp);
        }
    }

    for (auto out: l)
        cout << out;
}
