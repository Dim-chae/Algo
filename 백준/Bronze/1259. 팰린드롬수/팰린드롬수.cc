#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string n;

    while (true) {
        bool isPalindrome = 1;
        cin >> n;
        int len = n.length();
        if (n == "0") break;
        for (int i = 0; i < len / 2; i++) {
            if (n[i] != n[len - i - 1]) {
                isPalindrome = 0;
                break;
            }
        }
        if (isPalindrome == 1) cout << "yes" << '\n';
        else cout << "no" << '\n';
    }
}