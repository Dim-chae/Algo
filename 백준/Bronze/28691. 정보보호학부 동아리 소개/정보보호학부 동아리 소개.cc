#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    char c;
    cin >> c;

    map<char, string> m;
    
    m['M'] = "MatKor", m['W'] = "WiCys", m['C'] = "CyKor", m['A'] = "AlKor", m['$'] = "$clear";

    cout << m[c];
}