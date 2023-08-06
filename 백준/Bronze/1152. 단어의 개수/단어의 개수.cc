#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int count = 1;
    string str;

    getline(cin, str);

    for (int i = 0; i < str.length(); i++){
        if (str[i] == ' ')
            count++;
    }

    if (str[0] == ' ')
        count--;
    if (str[str.length() - 1] == ' ')
        count--;

    cout << count;
}