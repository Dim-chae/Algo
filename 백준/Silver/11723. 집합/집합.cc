#include <bits/stdc++.h>

using namespace std;

bool S[21];

bool check(int x){
    if (S[x]) return 1;
    else return 0;
}

void all(){
    for (int i = 0; i < 20; i++)
        S[i + 1] = 1;
}

void empty(){
    for (int i = 0; i < 20; i++)
        S[i + 1] = 0;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int M;
    cin >> M;

    while (M--) {
        string s;
        cin >> s;

        int x;

        if (s == "add") {
            cin >> x;
            if (!check(x)) S[x] = 1;
        }
        else if (s == "remove") {
            cin >> x;
            if (check(x)) S[x] = 0;
        }
        else if (s == "check") {
            cin >> x;
            cout << check(x) << '\n';
        }
        else if (s == "toggle") {
            cin >> x;
            S[x] = !check(x);
        }
        else if (s == "all")
            all();
        else if (s == "empty")
            empty();
    }
}