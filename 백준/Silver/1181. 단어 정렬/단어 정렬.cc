#include <bits/stdc++.h>

using namespace std;

int cmp(string a, string b){
    if(a.length() == b.length()){
        return a < b;
    }
    else{
        return a.length() < b.length();
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<string> v;

    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        v.push_back(s);
    }

    sort(v.begin(), v.end(), cmp);
    v.erase(unique(v.begin(), v.end()), v.end());

    for(auto i : v)
        cout << i << '\n';
}