#include <bits/stdc++.h>
using namespace std;

priority_queue<int, vector<int>, greater<>> pQ;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int N;
    cin >> N;

    while (N--) {
        int x;
        cin >> x;

        if (x == 0) {
            if (pQ.empty())
                cout << 0 << '\n';
            else {
                cout << pQ.top() << '\n';
                pQ.pop();
            }
        }
        else pQ.push(x);
    }
}