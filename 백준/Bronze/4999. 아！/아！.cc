#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    string j, d;
    cin >> j >> d;

    int jaehwan = 0, doctor = 0;

    for (auto i : j)
        if (i == 'a') jaehwan++;
    
    for (auto i : d)
        if (i == 'a') doctor++;

    if (jaehwan >= doctor) cout << "go";
    else cout << "no";
}