#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    while (true) {
        int n, total = 0;
        cin >> n;

        if (n == -1)
            break;

        vector<int> v;

        for (int i = 1; i < n; i++)
            if (n % i == 0) {
                v.push_back(i);
                total += i;
            }

        if (total == n) {
            cout << n << " = ";

            for (int i = 0; i < v.size(); i++) {
                if (i < v.size() - 1)
                    cout << v[i] << " + ";
                else
                    cout << v[i] << '\n';
            }
        }
        else
            cout << n << " is NOT perfect." << '\n';
    }
}