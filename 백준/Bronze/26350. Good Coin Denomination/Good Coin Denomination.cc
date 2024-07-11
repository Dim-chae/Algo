#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int T;
    cin >> T;

    int coin[1000];

    while (T--) {
        int d;
        cin >> d;

        bool isGoodCoin = 0;
        
        for (int i = 0; i < d; i++)
            cin >> coin[i];
        
        for (int i = 0; i < d - 1; i++) {
            if (coin[i] * 2 <= coin[i + 1])
                continue;
            else {
                isGoodCoin = 1;
                break;
                }
            }
        
        cout << "Denominations: ";

        for (int i = 0; i < d; i++)
            cout << coin[i] << ' ';

        if (isGoodCoin == 0) cout << '\n' << "Good coin denominations!" << "\n\n";
        else cout << '\n' << "Bad coin denominations!" << "\n\n";
    }
}