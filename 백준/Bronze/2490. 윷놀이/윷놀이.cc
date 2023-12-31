#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    
    int a, b, c, d;

    for (int i = 0; i < 3; i++) {
        cin >> a >> b >> c >> d;
        
        int res = a + b + c + d;

        if (res == 3)
            cout << "A\n";
        else if (res == 2)
            cout << "B\n";
        else if (res == 1)
            cout << "C\n";
        else if (res == 0)
            cout << "D\n";
        else
            cout << "E\n";
    }
}