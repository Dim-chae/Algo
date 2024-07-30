#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int N, tmp;
    cin >> N;

    vector<int> cpy;

    for (int i = 0; i < N; i++) {
        cin >> tmp;
        cpy.push_back(tmp);
    }

    for (int i = 0; i < N; i++)
        cout << cpy[i] << ' ' << cpy[i] << '\n';
}