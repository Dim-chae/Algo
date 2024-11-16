#include <iostream>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);

	int T;
	cin >> T;

	for (int i = 1; i <= T; i++) {
		int stu;
		cin >> stu;

		int cnt = 0;

		while (stu >= 3) {
			stu -= 3;
			cnt++;
		}
		cout << '#' << i << ' ' << cnt << '\n';
	}
    return 0;
}