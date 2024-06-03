#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(long long n) {
    string s;
    vector<int> answer;
    s = to_string(n);

    for (int i = s.length() - 1; i >= 0; i--)
        answer.push_back(s[i] - '0');                

    return answer;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int long long n;
    cin >> n;

    solution(n);
}