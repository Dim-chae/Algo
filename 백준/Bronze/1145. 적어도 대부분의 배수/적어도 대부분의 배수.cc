#include <bits/stdc++.h>
using namespace std;

int lcm(int a, int b) {
    return (a * b) / __gcd(a, b);
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n[5];

    for (int i = 0; i < 5; i++)
        cin >> n[i];

    int min_ = 1000001;

    for (int i = 0; i < 3; i++)
        for (int j = i + 1; j < 4; j++)
            for (int k = j + 1; k < 5; k++)
                min_ = min(min_, lcm(lcm(n[i], n[j]), n[k]));
                
    cout << min_;
}