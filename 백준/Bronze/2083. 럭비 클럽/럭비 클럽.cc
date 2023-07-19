#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string name;
    int age, weight;

    while(true) {
        cin >> name >> age >> weight;
        if (name == "#")
            break;

        cout << name << " ";
        
        if (age > 17 || weight >= 80)
            cout << "Senior" << '\n';
        else
            cout << "Junior" << '\n';
    }
}