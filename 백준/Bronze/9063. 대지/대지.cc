#include <bits/stdc++.h>

using namespace std;

bool cmp(const pair<int, int> &a, const pair<int, int> &b){
    return a.second < b.second;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<pair<int,int>> v;

    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        v.push_back(make_pair(a, b));
    }

    sort(v.begin(), v.end());
    int x = (v[n-1].first - v[0].first);

    sort(v.begin(), v.end(), cmp);
    int y = (v[n-1].second - v[0].second);

    cout << x * y;
}