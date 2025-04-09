#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int N;
    cin >> N;

    priority_queue<int> pq;

    while (N--) {
        int x;
        cin >> x;

        if (x != 0)
            pq.push(x);
        else if (!pq.empty()) {
            cout << pq.top() << '\n';
            pq.pop();
        }
        else cout << 0 << '\n';
    }
}