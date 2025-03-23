#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int A, B, tmp;
    cin >> A >> B;

    set<int> a;
    set<int> b;

    while (A--) {
        cin >> tmp;
        a.insert(tmp);
    }

    while (B--) {
        cin >> tmp;
        b.insert(tmp);
    }

    int cnt = a.size() + b.size();

    for (auto i : a)
        if (b.find(i) != b.end()) cnt--;

    for (auto i : b)
        if (a.find(i) != a.end()) cnt--;

    cout << cnt;
}