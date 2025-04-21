#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int N;
    cin >> N;

    queue<int> Q;

    for (int i = 1; i <= N; i++)
        Q.push(i);

    while (1) {
        if (Q.size() == 1) {
            cout << Q.front();
            break;
        }
        cout << Q.front() << ' ';
        Q.pop();
        Q.push(Q.front());
        Q.pop();
    }  
}