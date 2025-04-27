#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    if (a == 0) return b;
    return gcd(b % a, a);
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int N;
    cin >> N;

    vector<int> v;

    int prv, cur;

    for (int i = 0; i < N; i++) {
        cin >> cur;
        if (i > 0) v.push_back(cur - prv);
        prv = cur;
    }

    int minGcd = gcd(v[0], v[1]);
    int g = v[0];

    for (int i = 1; i < v.size(); i++) {
        g = gcd(g, v[i]);
        if (minGcd > g) minGcd = g;
    }

    int cnt = 0;

    for (auto i : v)
        if (i > minGcd) cnt += (i / minGcd - 1);
    
    cout << cnt;
}