#include <bits/stdc++.h>

using namespace std;

const int MX = 1000005;
int dat[2 * MX + 1];
int head = MX, tail = MX;

void push_front(int x){
    dat[--head] = x;
}

void push_back(int x){
    dat[tail++] = x;
}

void pop_front(){
    head++;
}

void pop_back(){
    tail--;
}

int front(){
    return dat[head];
}

int back(){
    return dat[tail - 1];
}

bool empty(){
    if (tail - head == 0) return 1;
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
            push_front(x);
        }
        else if (cm == '2') {
            int x;
            cin >> x;
            push_back(x);
        }
        else if (cm == '3') {
            if (!empty()) {
                cout << front() << '\n';
                pop_front();
            }
            else cout << -1 << '\n';
        }
        else if (cm == '4') {
            if (!empty()) {
                cout << back() << '\n';
                pop_back();
            }
            else cout << -1 << '\n';
        }
        else if (cm == '5')
            cout << tail - head << '\n';
        else if (cm == '6')
            cout << empty() << '\n';
        else if (cm == '7') {
            if (!empty())
                cout << front() << '\n';
            else cout << -1 << '\n';
        }
        else if (cm == '8') {
            if (!empty())
                cout << back() << '\n';
            else cout << -1 << '\n';
        }
    }
}