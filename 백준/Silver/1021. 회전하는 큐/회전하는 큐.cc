#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int N, M;
    cin >> N >> M;

    deque<int> DQ;

    for (int i = 1; i <= N; i++)
        DQ.push_back(i);

    int loc, idx, res = 0;

    while (M--) {
         cin >> loc;
         idx = find(DQ.begin(), DQ.end(), loc) - DQ.begin();

         while (DQ.front() != loc) {
            if (DQ.size() - idx > idx) {
                DQ.push_back(DQ.front());
                DQ.pop_front();
            }
            else {
                DQ.push_front(DQ.back());
                DQ.pop_back();
            }
            res++;
         }
         DQ.pop_front();
    }
    cout << res;
}