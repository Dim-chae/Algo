#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int N, cnt = 0;
    string S;
    char vowels[5] = {'a', 'i', 'u', 'e', 'o'};

    cin >> N >> S;

    for (auto i : S)
        for (auto j : vowels)
            if (i == j)
                cnt++;

    cout << cnt;
}