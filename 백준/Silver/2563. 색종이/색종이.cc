#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

   int paper[101][101];

   int n, cnt = 0;
   cin >> n;

   while(n--){
       int x, y;
       cin >> x >> y;

       for (int i = x; i < x + 10; i++){
           for (int j = y; j < y + 10; j++){
               if (paper[i][j] == 1) continue;
               paper[i][j] = 1;
               cnt++;
           }
       }
   }
   cout << cnt;
}