#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, b;
    cin >> n >> b;

    string s;

    while (n != 0){
        int tmp = n % b;

        if (tmp > 9)
            s += (char)(tmp - 10 + 'A');
        else
            s += (char)('0' + tmp);
        n /= b;
    }

    reverse(s.begin(), s.end());

    cout << s << '\n';
}