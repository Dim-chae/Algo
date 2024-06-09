#include <vector>

using namespace std;

double solution(vector<int> arr) {
    double answer = 0;
    int cnt = 0;
    for (auto i : arr) {
        answer += i;
        cnt++;
    }
    return answer / cnt;
}