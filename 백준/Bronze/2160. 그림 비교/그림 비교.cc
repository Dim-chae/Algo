#include <bits/stdc++.h>
using namespace std;

bool pic[51][5][7];

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int N;
    cin >> N;

    char c;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < 5; j++) {
            for (int k = 0; k < 7; k++) {
                cin >> c;
                pic[i][j][k] = (c == 'X');
            }
        }
    }

    int mx = -1, n1 = 0, n2 = 0;
    
    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            int cnt = 0;
            
            for (int k = 0; k < 5; k++) {
                for (int l = 0; l < 7; l++) {
                    if (pic[i][k][l] == pic[j][k][l]) cnt++;
                }
            }

            if (cnt > mx) {
                mx = cnt;
                n1 = i;
                n2 = j;
            }
        }
    }
    cout << n1 + 1 << ' ' << n2 + 1;
}