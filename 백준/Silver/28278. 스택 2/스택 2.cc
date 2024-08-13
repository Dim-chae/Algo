#include <bits/stdc++.h>

using namespace std;

const int MX = 1000005;
int dat[MX];
int pos = 0;

void push(int x){
    dat[pos++] = x;
}

void pop(){
    pos--;
}

int top(){
    return dat[pos-1];
}

bool empty(){
    if (pos == 0) return 1;
    else return 0;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int N;
    cin >> N;

    while (N--) {
        char cm;
        cin >> cm;

        if (cm == '1') {
            int x;
            cin >> x;
            push(x);
        }
        if (cm == '2') {
            if (empty()) cout << -1 << '\n';
            else {
                cout << top() << '\n';
                pop();
            }
        }
        if (cm == '3')
            cout << pos << '\n';
        if (cm == '4')
            cout << empty() << '\n';
        if (cm == '5') {
            if (empty()) cout << -1 << '\n';
            else cout << top() << '\n';
        }
    }
}