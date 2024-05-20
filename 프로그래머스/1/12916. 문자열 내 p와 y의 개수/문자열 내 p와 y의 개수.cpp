#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    int p = 0, y = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'p' || s[i] == 'P') p++;
        else if (s[i] == 'y' || s[i] == 'Y') y++;
    }
    bool answer = true;
    if (p != y) answer = false;
    return answer;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string s;
    cin >> s;
    
    solution(s);
}