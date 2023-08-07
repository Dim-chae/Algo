#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, count = 0;
    string skill;

    int lr = 0, sk = 0;

    cin >> n >> skill;

    for (int i = 0; i < n; i++) {
        if (skill[i] >= '1' && skill[i] <= '9') {
            count++;
        } else {
            switch (skill[i]) {
                case 'L':
                    lr++;
                    break;

                case 'R':
                    if (lr > 0) {
                        count++;
                        lr--;
                    }
                    else goto end;
                    break;

                case 'S':
                    sk++;
                    break;

                case 'K':
                    if (sk > 0) {
                        count++;
                        sk--;
                    }
                    else goto end;
                    break;
            }
        }
    }
    end:
    
    cout << count;
}