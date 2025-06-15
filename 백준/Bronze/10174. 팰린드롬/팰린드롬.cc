#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n;
    cin >> n;
    cin.ignore();

    string s;

    while (n--) {
        getline(cin, s);
        
        int len = s.length();
        bool isPalindrome = 1;

        for (auto& c : s)
            c = tolower(c);

        for (int i = 0; i < len / 2; i++) {
            if (s[i] != s[len - 1 - i]) {
                isPalindrome = 0;
                break;
            }
        }
        
        cout << (isPalindrome ? "Yes" : "No") << '\n';
    }
}