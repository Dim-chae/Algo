#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int L;
    cin >> L;

    long long int total = 0;

    for (int i = 0; i < L; i++) {
        char tmp;
        cin >> tmp;
        total += (tmp - 'a' + 1) * pow(31, i);
    }
    cout << total % 1234567891;
}