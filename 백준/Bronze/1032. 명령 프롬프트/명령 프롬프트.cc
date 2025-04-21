#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int N;
    cin >> N;

    string files[51];

    for (int i = 0; i < N; i++)
        cin >> files[i];

    string res = files[0];
    int len = files[0].length();

    for (int i = 1; i < N; i++)
        for (int j = 0; j < len; j++)
            if (files[i - 1][j] != files[i][j]) res[j] = '?';

    cout << res;
}