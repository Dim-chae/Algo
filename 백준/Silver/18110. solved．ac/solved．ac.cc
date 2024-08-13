#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n;
    cin >> n;

    if (n == 0) {
        cout << 0;
        return 0;
    }

    int cut = round(n * 0.15);
    int rem = n - (cut * 2);
    
    deque<int> DQ;

    while (n--) {
        int tmp;
        cin >> tmp;
        DQ.push_back(tmp);
    }

    sort(DQ.begin(), DQ.end());

    for (int i = 0; i < cut; i++) {
            DQ.pop_front();
            DQ.pop_back();
    }

    int total = 0;

    while (!DQ.empty()) {
        total += DQ.front();
        DQ.pop_front();
    }

    int res = round(double(total) / double(rem));
    cout << res;
}