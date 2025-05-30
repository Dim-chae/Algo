#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    string s;
    cin >> s;

    if (s.length() <= 1) {
        cout << "◝(⑅•ᴗ•⑅)◜..°♡ 뀌요미!!";
        return 0;
    }

    int gap = s[1] - s[0];
    bool isItCuteNum = 1;

    for (int i = 1; i < s.length() - 1; i++) {
        if (s[i + 1] - s[i] != gap) {
            isItCuteNum = 0;
            break;
        }
    }

    cout << (isItCuteNum ? "◝(⑅•ᴗ•⑅)◜..°♡ 뀌요미!!" : "흥칫뿡!! <(￣ ﹌ ￣)>");
}