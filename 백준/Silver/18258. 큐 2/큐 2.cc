#include <bits/stdc++.h>

using namespace std;

const int MX = 2000001;
int dat[MX];
int head = 0, tail = 0;

void push(int x){
    dat[tail++] = x;
}

void pop(){
    head++;
}

bool empty(){
    if (head - tail == 0) return 1;
    else return 0;
}

int front(){
    return dat[head];
}

int back(){
    return dat[tail - 1];
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int N;
    cin >> N;

    while (N--) {
        string cm;
        cin >> cm;

        if (cm == "push") {
            int x;
            cin >> x;
            push(x);
        }
        else if (cm == "pop") {
            if (empty()) cout << -1 << '\n';
            else {
                cout << front() << '\n';
                pop();
            }
        }
        else if (cm == "size")
            cout << tail - head << '\n';
        else if (cm == "empty")
            cout << empty() << '\n';
        else if (cm == "front") {
            if (empty()) cout << -1 << '\n';
            else cout << front() << '\n';
        }
        else if (cm == "back") {
            if (empty()) cout << -1 << '\n';
            else cout << back() << '\n';
        }
    }
}