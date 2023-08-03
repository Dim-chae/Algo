#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int c;
    cin >> c;

    while (c--){
        list<char> l;
        auto iter = l.begin();

        string s;
        cin >> s;

        for (auto cur : s){
            if (cur == '-'){
                if (iter != l.begin())
                    iter = l.erase(--iter);
            }
            else if (cur == '<'){
                if (iter != l.begin())
                    iter--;
            }
            else if (cur == '>'){
                if (iter != l.end())
                    iter++;
            }
            else
                l.insert(iter, cur);
        }

        for (auto out : l)
            cout << out;

        cout << '\n';
    }
}
