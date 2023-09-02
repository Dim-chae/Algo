#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int> num;
    int tmp, total = 0;

    for (int i = 0; i < 5; i++) {
        cin >> tmp;
        num.push_back(tmp);
    }

    sort(num.begin(), num.end());

    total = accumulate(num.begin(), num.end(), 0);

    cout << total / 5 << '\n' << num[2];
}