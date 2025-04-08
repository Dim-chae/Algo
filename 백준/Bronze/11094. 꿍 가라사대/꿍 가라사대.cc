#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int N;
    cin >> N;

    cin.ignore();
    
    while (N--) {
        string s;
        getline(cin, s);

        if (s.find("Simon says") != string::npos)
            cout << s.substr(10) << '\n';
    }
}