#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int Y;

    while (true) {
        cin >> Y;
        if (Y == 0) return 0;

        cout << Y << ' ';

        if (Y % 4 == 0 && Y >= 1896) {
            if (Y >= 1914 && Y <= 1918 || Y >= 1939 && Y <= 1945)
                cout << "Games cancelled" << '\n';
            else if (Y > 2020)
                cout << "No city yet chosen" << '\n';
            else 
                cout << "Summer Olympics" << '\n';
        }
        else
            cout << "No summer games" << '\n';
    }
}