#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int N;
    cin >> N;

    string s = "WelcomeToSMUPC";
    cout << s[(N - 1) % 14];
}