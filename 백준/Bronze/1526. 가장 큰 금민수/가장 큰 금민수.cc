#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int N;
    cin >> N;

    for (int i = N; i >= 4; i--) {
        string num = to_string(i);
        bool isItGold = 1;

        for (auto j : num)
            if (j != '4' && j != '7') isItGold = 0;
        
        if (isItGold) {
            cout << i;
            break;
        }
    }
}