#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n;
    cin >> n;
    vector<long long> v;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;

        if (s.back() == '0') s.pop_back();

        reverse(s.begin(), s.end());
        v.push_back(stoll(s));
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < n; i++)
        cout << v[i] << '\n';
}