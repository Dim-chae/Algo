#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int N;
    cin >> N;
    
    stack<int> S;

    int cnt = 1;

    while (N--) {
        int num;
        cin >> num;

        if (cnt == num) cnt++;
        else S.push(num);

        while (!S.empty() && S.top() == cnt) {
            S.pop();
            cnt++;
        }
    }

    if (S.empty()) cout << "Nice";
    else cout << "Sad";
}