#include <bits/stdc++.h>
using namespace std;

#define end first
#define start second

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int N;
    cin >> N;

    int s, e;

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    queue<pair<int, int>> q;

    while (N--) {
        cin >> s >> e;
        pq.push({e, s});        
    }

    while (!pq.empty()) {
        if (q.empty() || q.back().end <= pq.top().start)
            q.push({pq.top().end, pq.top().start});
        pq.pop();
    }
    
    cout << q.size();
}