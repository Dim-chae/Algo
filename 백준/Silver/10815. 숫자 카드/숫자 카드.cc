#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    set<int> cards;
    int N, M;
    cin >> N;

    while (N--) {
        int tmp;
        cin >> tmp;
        cards.insert(tmp);
    }

    cin >> M;
    
    while (M--) {
        int tmp;
        cin >> tmp;
        if (cards.find(tmp) != cards.end())
            cout << 1 << ' ';
        else
            cout << 0 << ' ';        
    }
}