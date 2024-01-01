#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    
    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        for (int j = N - 1; j > i; j--) {
            cout << ' ';
        }
        for (int j = 0; j <= i; j++) {
            cout << '*';
        }
        cout << '\n';
    }
}