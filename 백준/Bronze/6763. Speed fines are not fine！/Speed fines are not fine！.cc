#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int limit, speed;
    cin >> limit >> speed;

    int gap = speed - limit;

    if (gap <= 0)
        cout << "Congratulations, you are within the speed limit!";
    else {
        cout << "You are speeding and your fine is ";
        if (gap <= 20) cout << "$100.";
        else if (gap <= 30) cout << "$270.";
        else cout << "$500.";
    }
}