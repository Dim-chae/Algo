#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int L, P;
    cin >> L >> P;

    int people = L * P;
    int news;

    for (int i = 0; i < 5; i++) {
        cin >> news;
        cout << news - people;
        if (i != 4) cout << ' ';
    }
}