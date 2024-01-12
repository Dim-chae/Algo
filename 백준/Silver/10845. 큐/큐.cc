#include <bits/stdc++.h>

using namespace std;

const int MX = 1000005;
int dat[MX];
int head = 0, tail = 0;

void push(int x) {
    dat[tail++] = x;
}

void pop() {
    head++;
}

int front() {
    return dat[head];
}

int back() {
    return dat[tail-1];
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int N, x;
    cin >> N;

    string com;

    while (N--) {
        cin >> com;

        if (com == "push") {
            cin >> x;
            push(x);
        }

        else if (com == "pop") {
            if (tail != head) {
                cout << dat[head] << '\n';
                pop();
            }
            else
                cout << -1 << '\n';
        }
        
        else if (com == "size") {
            cout << tail - head << '\n';
        }

        else if (com == "empty") {
            cout << (tail == head) << '\n';
        }

        else if (com == "front") {
            if (tail != head)
                cout << front() << '\n';
            else
                cout << -1 << '\n';
        }

        else if (com == "back") {
            if (tail != head)
                cout << back() << '\n';
            else
                cout << -1 << '\n';
        }
    }
}