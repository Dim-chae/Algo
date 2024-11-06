#include <iostream>
#include <vector>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int T;
    cin >> T;
    
    while (T--) {
        int num;
        cin >> num;

        int cnt[102] = {0, };

        for (int i = 0; i < 1000; i++) {
            int score;
            cin >> score;
            cnt[score]++;
        }

        int mode = 0, modeCnt = 0;

        for (int i = 1; i <= 100; i++) {
            if (cnt[i] >= modeCnt) {
                mode = i;
                modeCnt = cnt[i];
            }
        }
        cout << "#" << num << " " << mode << '\n';
    }
    return 0;
}