#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int N;
    cin >> N;

    string s;

    N += 3071;

    s.push_back(N / 4096 + 234);
    s.push_back(N / 64 % 64 + 128);
    s.push_back(N % 64 + 128);

    cout << s;
}