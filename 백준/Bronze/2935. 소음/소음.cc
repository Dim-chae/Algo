#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    string A, B;
    char C;

    cin >> A >> C >> B;

    int al = A.length() - 1, bl = B.length() - 1;

    if (C == '*') {
        cout << 1;
        for (int i = 0; i < al + bl; i++)
            cout << 0;
    }
    else {
        if (al == bl) {
            cout << 2;
            for (int i = 0; i < al; i++)
                cout << 0;
        }
        else {
            cout << 1;
            if (al > bl) {
                for (int i = 0; i < al - bl - 1; i++)
                    cout << 0;
                cout << 1;
                for (int i = 0; i < bl; i++)
                    cout << 0;
            }
            else {
                for (int i = 0; i < bl - al - 1; i++)
                    cout << 0;
                cout << 1;
                for (int i = 0; i < al; i++)
                    cout << 0;
            }
        }
    }
}