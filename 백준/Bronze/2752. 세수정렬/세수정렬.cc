#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int num[3];
    int tmp;
    
    for (int i = 0; i < 3; i++)
        cin >> num[i];

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 2 - i; j++){
            if (num[j] > num[j+1]){
                tmp = num[j];
                num[j] = num[j+1];
                num[j+1] = tmp;
            }
        }
    }
    
    for (auto i : num)
        cout << i << ' ';
}