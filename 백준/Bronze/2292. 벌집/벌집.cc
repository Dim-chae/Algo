#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int step = 1, end = 1, add = 6;
    int n;
    cin >> n;

    while (true) {
        if (n <= end)
            break;

        end += add;
        add += 6;
        ++step;
    }
    cout << step;
}