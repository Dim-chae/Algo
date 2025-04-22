#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int N;
    cin >> N;

    int s[101];
    int c = 0;

    for (int i = 0; i < N; i++)
        cin >> s[i];

    for (int i = N - 1; i > 0; i--) {
        while (s[i] <= s[i - 1]) {
            s[i - 1]--;
            c++;
        }
    }
    
    cout << c;
}