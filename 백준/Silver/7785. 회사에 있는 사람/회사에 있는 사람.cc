#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int N;
    cin >> N;

    set<string, greater<string>> s;

    while (N--) {
        string name, el;
        cin >> name >> el;

        if (el == "leave")
            s.erase(name);
        else
            s.insert(name);
    }

    for (auto i : s)
        cout << i << '\n';
}