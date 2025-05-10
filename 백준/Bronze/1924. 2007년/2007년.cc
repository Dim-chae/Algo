#include <bits/stdc++.h>
using namespace std;

int months[12] = {3, 0, 3, 2, 3, 2, 3, 3, 2, 3, 2, 3};
string days[7] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int x, y;
    cin >> x >> y;

    int date = y;

    for (int i = 1; i < x; i++) date += months[i - 1];

    cout << days[date % 7];
}