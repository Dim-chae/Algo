#include <iostream>
#include <cmath>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    double d = sqrt(n);
    if (d - int(d) == 0) {
        answer = pow(int(d) + 1, 2);
        return answer;
    }
    else return -1;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    long long n;
    cin >> n;

    solution(n);
}