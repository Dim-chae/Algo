#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string subject, rate;
    double credit;
    double totalCredit = 0.0, total = 0.0, temp = 0.0;

    for (int i = 0; i < 20; i++){
        cin >> subject >> credit >> rate;

        if (rate == "P") continue;

        totalCredit += credit;

        if (rate == "F") continue;
        if (rate[0] == 'A') temp = 4;
        else if (rate[0] == 'B') temp = 3;
        else if (rate[0] == 'C') temp = 2;
        else if (rate[0] == 'D') temp = 1;

        if (rate[1] == '+') temp += 0.5;

        total += credit * temp;
    }

    cout << fixed << setprecision(6) << total / totalCredit;
}