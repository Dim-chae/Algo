#include <bits/stdc++.h>

using namespace std;

vector<tuple<int, int, int>> v;
int arr[101];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++){
        int a, b, c;
        cin >> a >> b >> c;
        v.push_back(make_tuple(c, b, a));
    }

    sort(v.rbegin(), v.rend());

    int count = 0;

    for (int i = 0; i < v.size(); i++){
        if (count == 3)
            break;
        if (arr[get<2>(v[i])] == 2)
            continue;

        cout << get<2>(v[i]) << " " << get<1>(v[i]) << '\n';
        arr[get<2>(v[i])]++;
        count++;
    }
}