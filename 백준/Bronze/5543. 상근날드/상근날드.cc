#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int sd, jd, hd, cl, ci;
    cin >> sd >> jd >> hd >> cl >> ci;

    int burger = min({sd, jd, hd});
    int drink = min(cl, ci);

    cout << burger + drink - 50;
}