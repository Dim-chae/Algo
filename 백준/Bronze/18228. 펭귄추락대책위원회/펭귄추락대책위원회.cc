#include <bits/stdc++.h>
using namespace std;

vector<int> ice;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int N;
    cin >> N;

    int tmp, pen = 0;
    
    for (int i = 0; i < N; i++) {
        cin >> tmp;
        ice.push_back(tmp);
        if (tmp == -1) pen = i;
    }
    
    int m1 = 1000000000, m2 = 1000000000;

    for (int i = 0; i < pen; i++)
        if (ice[i] < m1) m1 = ice[i];

    for (int i = pen + 1; i < N; i++)
        if (ice[i] < m2) m2 = ice[i];

    cout << m1 + m2;
}