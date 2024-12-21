#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int N;
    cin >> N;

    vector<int> v;

    for (int i = 0; i < N; i++) {
        int tmp;
        cin >> tmp;
        v.push_back(tmp);
    }

    sort(v.begin(), v.end());

    int min = 0;

    for (int i = 0; i < N; i++) {
        if (v[i] != i + 1) {
            min = i + 1;
            break;
        }
    }
    if (min == 0) cout << N + 1;
    else cout << min;
}