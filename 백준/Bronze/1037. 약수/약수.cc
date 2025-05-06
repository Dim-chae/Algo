#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int A;
    cin >> A;

    vector<int> v;

    while (A--) {
        int tmp;
        cin >> tmp;
        v.push_back(tmp);
    }

    int min = *min_element(v.begin(), v.end());
    int max = *max_element(v.begin(), v.end());

    cout << min * max;
}