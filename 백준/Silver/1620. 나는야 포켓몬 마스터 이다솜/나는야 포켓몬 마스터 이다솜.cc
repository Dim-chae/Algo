#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int N, M;
    cin >> N >> M;

    map<string, int> dict;
    
    string name, question, poke[100001];

    for (int i = 1; i <= N; i++) {
        cin >> name;
        dict.insert(make_pair(name, i));
        poke[i] = name;
    }

    for (int i = 0; i < M; i++) {
        cin >> question;
        if (isdigit(question[0]) != 0) {
            cout << poke[stoi(question)] << '\n';
        }
        else {
            cout << dict.find(question)->second << '\n';
        }
    }
}