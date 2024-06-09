#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(int num) {
    string answer = num & 1 ? "Odd" : "Even";
    return answer;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int num;
    cin >> num;
    solution(num);
}