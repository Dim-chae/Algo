#include <bits/stdc++.h>

using namespace std;

const int MX = 1000005;
int dat[MX*2+1];
int head = MX, tail = MX;

void push_front(int X) {
    dat[--head] = X;
}

void push_back(int X) {
    dat[tail++] = X;
}

void pop_front() {
    head++;
}

void pop_back() {
    tail--;
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

    int N, X;
    cin >> N;

    string cm;

    for (int i = 0; i < N; i++) {
        cin >> cm;

        if (cm == "push_front") {
            cin >> X;
            push_front(X);
        }

        else if (cm == "push_back") {
            cin >> X;
            push_back(X);
        }

        else if (cm == "pop_front") {
            if (tail != head) {
                cout << front() << '\n';
                pop_front();
            }
            else
                cout << -1 << '\n';
        }

        else if (cm == "pop_back") {
            if (tail != head) {
                cout << back() << '\n';
                pop_back();
            }
            else
                cout << -1 << '\n';
        }

        else if (cm == "size") {
            cout << tail - head << '\n';
        }

        else if (cm == "empty") {
            cout << (tail == head) << '\n';
        }

        else if (cm == "front") {
            if (tail != head) {
                cout << front() << '\n';
            }
            else
                cout << -1 << '\n';

        }

        else if (cm == "back") {
            if (tail != head) {
                cout << back() << '\n';
            }
            else
                cout << -1 << '\n';
        }
    }
}