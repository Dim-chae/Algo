#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int K;
    cin >> K;

    for (int i = 1; i <= K; i++) {
        int n, s, d;
        cin >> n >> s >> d;

        int total = 0;

        for (int j = 0; j < n; j++) {
            int di, vl;
            cin >> di >> vl;

            if (s * d >= di) total += vl;
        }
        cout << "Data Set " << i << ':' << '\n' << total << '\n' << '\n';
    }
}