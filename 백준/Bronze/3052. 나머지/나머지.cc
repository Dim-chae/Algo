#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int num[10];
    int remain[42] = {};
    int count = 0;

    for (int i = 0; i < 10; i++) {
        cin >> num[i];
        remain[(num[i] % 42)] += 1;
    }

    for (int i = 0; i < 42; i++) {
        if (remain[i] != 0)
            count++;
    }
    cout << count;
}