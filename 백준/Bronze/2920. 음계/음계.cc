#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int key[8];
    int asc, des = 0;

    for (int i = 0; i < 8; i++) {
        cin >> key[i];

        if (key[i] == i+1)
            asc += 1;
        else if (key[i] == 8-i)
            des += 1;
    }

    if (asc == 8)
        cout << "ascending";
    else if (des == 8)
        cout << "descending";
    else
        cout << "mixed";
}