#include <bits/stdc++.h>

using namespace std;

int S[6];

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int N;
    cin >> N;

    for (int i = 0; i < 6; i++)
        cin >> S[i];
    
    int T, P;
    cin >> T >> P;

    int shirt = 0;

    for (int i = 0; i < 6; i++)
        shirt += (S[i] + T - 1) / T; 
    
    cout << shirt << '\n';
    cout << N / P << ' ' << N % P;
}    
