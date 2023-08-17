#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string str;
    cin >> str;

    string a[8] = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};

    for (int i = 0; i < 8; i++){
        while(true){
            if(str.find(a[i]) != string::npos){
                str.replace(str.find(a[i]), a[i].length(), "a");
            }
            else break;
        }
    }
    cout << str.length();
}