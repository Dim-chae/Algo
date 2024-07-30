#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int N, tmp;
    cin >> N;

    vector<int> v;

    for (int i = 0; i < N; i++) {
        cin >> tmp;
        v.push_back(tmp);
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < N; i++)
       cout << v[i] << '\n';
}