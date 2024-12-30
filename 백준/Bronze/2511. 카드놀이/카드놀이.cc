#include <bits/stdc++.h>

using namespace std;

#define loop for(int i = 0; i < 10; i++)

int A[11], B[11];
char lastWinner = 'D';

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    loop cin >> A[i];
    loop cin >> B[i];

    int AScore = 0, BScore = 0;

    loop {
        if (A[i] > B[i]) {
            AScore += 3;
            lastWinner = 'A';
        }
        else if (A[i] < B[i]) {
            BScore += 3;
            lastWinner = 'B';
        }
        else {
            AScore += 1;
            BScore += 1;
        }
    }
    cout << AScore << ' ' << BScore << '\n';

    if (AScore > BScore) cout << 'A';
    else if (AScore < BScore) cout << 'B';
    else cout << lastWinner;
}