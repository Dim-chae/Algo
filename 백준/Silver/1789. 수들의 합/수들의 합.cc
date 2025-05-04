#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    long long S;
    cin >> S;

    int num = 1;

    while (1) {
        S -= num;
        if (S <= num) break;
        else num++;
    }

    cout << num;
}
