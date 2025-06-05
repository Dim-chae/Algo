#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    while (1) {
        int a, b;
        cin >> a >> b;

        if (a == 0 && b == 0) return 0;

        int room = a - b;
        bool has3Group = room % 2 == 1 && room > 2;
        int pairs = has3Group ? (room - 3) / 2 : room / 2;
        
        cout << pairs << " " << has3Group << "\n";
    }
}