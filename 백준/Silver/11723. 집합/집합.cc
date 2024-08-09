#include <bits/stdc++.h>

using namespace std;

vector<int> v;

bool check(int x) {
    auto it = find(v.begin(), v.end(), x);
    if (it == v.end()) return 0;
    else return 1;
}

void all() {
    v.clear();
    for (int i = 0; i < 20; i++)
        v.push_back(i + 1);
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int M;
    cin >> M;

    while (M--) {
        string s;
        cin >> s;

        if (s == "add") {
            int x;
            cin >> x;
            if (!check(x)) v.push_back(x);
        }
        else if (s == "remove") {
            int x;
            cin >> x;
            if (check(x)) v.erase(remove(v.begin(), v.end(), x));
        }
        else if (s == "check") {
            int x;
            cin >> x;
            cout << check(x) << '\n';
        }
        else if (s == "toggle") {
            int x;
            cin >> x;
            if (check(x)) v.erase(remove(v.begin(), v.end(), x));
            else v.push_back(x);
        }
        else if (s == "all")
            all();
        else if (s == "empty")
            v.clear();
    }
}