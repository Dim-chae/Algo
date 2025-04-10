#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<int> v;

        int tmp;
        
        while (N--) {
            cin >> tmp;
            v.push_back(tmp);
        }

        int max = *max_element(v.begin(), v.end());
        int min = *min_element(v.begin(), v.end());

        cout << min << ' ' << max << '\n';
    }   
}