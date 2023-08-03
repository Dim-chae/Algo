#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    list<int> l;
    auto cur = l.begin();

    for (int i = 1; i <= n; i++)
        l.push_back(i);

    cout << '<';

    while (!l.empty()) {
        for (int i = 0; i < k; i++) {
            if (++cur == l.end())
                cur = l.begin();
        }

        cout << *cur;
        cur = --l.erase(cur);

        if (l.empty())
            cout << '>';
        else
            cout << ", ";
    }
}
