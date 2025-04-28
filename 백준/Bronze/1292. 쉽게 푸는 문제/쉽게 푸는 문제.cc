#include <bits/stdc++.h>
using namespace std;

int findNum(int pos) {
    int num = 1, sum = 1;

    while (sum < pos) {
        num++;
        sum += num;
    }
    
    return num;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int A, B;
    cin >> A >> B;

    int total = 0;

    for (int i = A; i <= B; i++)
        total += findNum(i);

    cout << total;
}
