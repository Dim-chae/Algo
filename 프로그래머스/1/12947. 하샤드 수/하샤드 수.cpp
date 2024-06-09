#include <string>

using namespace std;

bool solution(int x) {
    bool answer = true;
    int sum = 0;
    string s = to_string(x);

    for (int i = 0; i < s.length(); i++)
        sum += (s[i] - '0');

    if (x % sum != 0) answer = false;
    
    return answer;
}