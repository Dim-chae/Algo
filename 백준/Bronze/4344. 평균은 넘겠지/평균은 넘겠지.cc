#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int C;
    cin >> C;

    while (C--) {
        int N;
        cin >> N;

        int students[1001], total = 0, cnt = 0;
        
        for (int i = 0; i < N; i++) {
            cin >> students[i];
            total += students[i];
        }

        double avg = total / N;

        for (int i = 0; i < N; i++)
            if (students[i] > avg) cnt++;
        
        double res = double(cnt) / N * 100;

        cout << fixed;
        cout.precision(3);
  
        cout << res << '%' << '\n';
    }
}