#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int N, M, cnt = 0;
    cin >> N >> M;

    set<string> hear;
    set<string> see;
    set<string> hearAndSee;

    string tmp;

    while (N--) {
        cin >> tmp;
        hear.insert(tmp);
    }

    while (M--) {
        cin >> tmp;
        see.insert(tmp);
    }

    for (auto name : hear) {
        auto it = see.find(name);
        if (it != see.end()) {
            hearAndSee.insert(name);
        }
    }

    cout << hearAndSee.size() << '\n';

    for (auto name : hearAndSee)
        cout << name << '\n';
}