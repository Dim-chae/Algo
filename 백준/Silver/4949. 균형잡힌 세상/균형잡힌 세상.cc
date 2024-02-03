#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    while (true) {
        string s;
        getline(cin, s);

        if (s == ".") break;
        
        stack<char> c;
        bool isValid = true;
    
        for (auto i : s) {
            if (i == '[' || i == '(') c.push(i);
            else if (i == ']') {
                if (c.empty() || c.top() == '(') {
                    isValid = false;
                    break;
                }
                c.pop();
            }
            else if (i == ')') {
                if (c.empty() || c.top() == '[') {
                    isValid = false;
                    break;
                }
                c.pop();
            }
        }

        if (!c.empty()) isValid = false;

        if (isValid == true)
            cout << "yes" << '\n';
        else
            cout << "no" << '\n';
    }
}