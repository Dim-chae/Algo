#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int N;
    cin >> N;
    cin.ignore();

    while (N--) {
        string s, tmp;
        getline(cin, s);
        
        stringstream ss(s);
        queue<string> Q;

        while (getline(ss, tmp, ' '))
            Q.push(tmp);
            
        Q.pop();
        cout << "god";

        while (!Q.empty()) {
            cout << Q.front();
            Q.pop();
        }

        cout << '\n';
    }
}