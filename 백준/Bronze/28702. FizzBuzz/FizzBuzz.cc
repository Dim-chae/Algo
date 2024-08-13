#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    string s[3];
    cin >> s[0] >> s[1] >> s[2];

    int num, idx;

    for (int i = 0; i < 3; i++) {
        if (isdigit(s[i][0]) != 0) {
            num = stoi(s[i]);
            idx = i;
            break;
        } 
    }
    int res = num + (3 - idx);

    if (res % 3 == 0 && res % 5 == 0) cout << "FizzBuzz";
    else if (res % 3 == 0 && res % 5 != 0) cout << "Fizz";
    else if (res % 3 != 0 && res % 5 == 0) cout << "Buzz";
    else cout << res;
}