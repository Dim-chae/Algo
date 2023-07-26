#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int num[10] = {};
    string s;
    int a, b, c;

    cin >> a >> b >> c;
    s = to_string(a*b*c);

    for (int i = 0; i < s.length(); i++){
        for (int j = 0; j < 10; j++) {
            if (s[i] - '0' == j)
                num[j]++;
        }
    }

    for (int i = 0; i < 10; i++)
        cout << num[i] << '\n';

}
