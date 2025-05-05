#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int D, H, W;
    cin >> D >> H >> W;

    double R = sqrt(H * H + W * W);

    int height = D / R * H;
    int width = D / R * W;

    cout << height << ' ' << width;
}