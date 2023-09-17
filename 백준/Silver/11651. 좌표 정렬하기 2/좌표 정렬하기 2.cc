#include <bits/stdc++.h>

using namespace std;

struct p{
    int x, y;
};

int cmp(p a, p b){
    if (a.y == b.y)
        return a.x < b.x;
    else
        return a.y < b.y;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<p> v;

    for(int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;
        v.push_back({x, y});
    }

    sort(v.begin(), v.end(), cmp);

    for(auto t: v){
        cout << t.x << " " << t.y << '\n';
    }
}