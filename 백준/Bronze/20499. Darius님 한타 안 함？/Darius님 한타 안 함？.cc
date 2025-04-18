#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    string s, tmp;
    cin >> s;

    istringstream iss(s);
    vector<int> v;

    while(getline(iss, tmp, '/'))
        v.push_back(stoi(tmp));

    string res = (v[0] + v[2] < v[1] || v[1] == 0) ? "hasu" : "gosu";
    cout << res;
}