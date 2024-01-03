#include <bits/stdc++.h>

using namespace std;

const int MX = 1000005;
int dat[MX];
int pos = 0;

void push(int X) {
    dat[pos++] = X;
}

void pop() {
    pos--;
}

int top() {
    return dat[pos-1];
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    
    int N;
    cin >> N;

    string com;
    int X;

    while (N--) {
        cin >> com;

        if (com == "push") {
            cin >> X;
            push(X);
        }

        else if (com == "pop") {
            if (pos == 0)
                cout << -1 << '\n';
            else {
                cout << top() << '\n';
                pop();
            }
        }

        else if (com == "size")
            cout << pos << '\n';

        else if (com == "empty")
            cout << (int)(pos == 0) << '\n';

        else if (com == "top") {
            if (pos == 0)
                cout << -1 << '\n';
            else
                cout << top() << '\n';
        }
    }
}