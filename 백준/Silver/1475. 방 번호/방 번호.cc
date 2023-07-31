#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int num[10] = {};
    string n;
    cin >> n;

    for (int i = 0; i < n.length(); i++)
        num[n[i] - '0']++;

    num[6] = num[9] = (num[6] + num[9] + 1) / 2;

    cout << *max_element(num, num+10);
}