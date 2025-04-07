#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int N, M;
    cin >> N >> M;

    map<string, string> note;

    while (N--) {
        string link, password;
        cin >> link >> password;
        note.insert(make_pair(link, password));
    }

    while (M--) {
        string question;
        cin >> question;
        cout << note[question] << '\n';
    }
}