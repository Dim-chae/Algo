#include <iostream>

using namespace std;

int solution(int n)
{
    int answer = 0;
    string s = to_string(n);
    for (int i = 0; i < s.length(); i++)
        answer += (s[i] - '0');
    return answer;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int N;
    cin >> N;
    solution(N);
}