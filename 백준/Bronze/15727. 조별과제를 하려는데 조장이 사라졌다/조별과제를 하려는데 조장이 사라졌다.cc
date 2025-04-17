#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int L;
    cin >> L;

    int plus = L % 5 ? 1 : 0;

    cout << L / 5 + plus;
}