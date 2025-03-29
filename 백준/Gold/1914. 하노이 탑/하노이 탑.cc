#include <bits/stdc++.h>
using namespace std;

void hanoi(int K, int start, int to, int via) {
    if (K == 1) cout << start << ' ' << to << '\n';
    else {
        hanoi((K - 1), start, via, to);
        cout << start << ' ' << to << '\n';
        hanoi((K - 1), via, to, start);
    }
}

int main() {
    int K;
    cin >> K;
    
    string move = to_string(pow(2, K));
    int f = move.find('.');
    
    move = move.substr(0, f);
    move[move.length() - 1] -= 1;
    cout << move << '\n';
    
    if (K <= 20) hanoi(K, 1, 3, 2);
    else return 0;
}