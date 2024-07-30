#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int T;
    cin >> T;

    while (T--) {
        string p;
        int n;
        cin >> p >> n;

        deque<int> DQ;

        string x;
        cin >> x;

        string num = "";

        for (char c : x) {
            if (isdigit(c))
                num += c;
            else if (c == ',' || c == '[' || c == ']') {
                if (!num.empty()) {
                    DQ.push_back(stoi(num));
                    num = "";
                }
            }
        }
        
        bool isErrorOccured = 0, isReversed = 0;

        for (char cmd : p) {
            if (cmd == 'R')
                isReversed = !isReversed;
            
            else if (cmd == 'D') {
                if (DQ.empty()) {
                    isErrorOccured = 1;
                    break;
                }
                if (isReversed)
                    DQ.pop_back();
                
                else
                    DQ.pop_front();
                }
            }

            if (!isErrorOccured) {
                cout << '[';
                if (isReversed) {
                    for (auto it = DQ.rbegin(); it != DQ.rend(); ++it) {
                        if (it != DQ.rbegin()) cout << ',';
                        cout << *it;
                    }
                }
                else {
                    for (auto it = DQ.begin(); it != DQ.end(); ++it) {
                        if (it != DQ.begin()) cout << ',';
                        cout << *it;
                    }
                }
                cout << ']' << '\n';
            }
            else cout << "error" << '\n';
    }
}