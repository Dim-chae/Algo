#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++){
        int h, w, n;
        cin >> h >> w >> n;

        int hc = 0, wc = 1;

        while (n--){
            hc++;

            if (hc > h) {
                hc = 1;
                wc++;
            }

            if (wc > w)
                wc = 1;
            }

        if (wc < 10)
            cout << hc << 0 << wc << '\n';
        else
            cout << hc << wc << '\n';
    }
}