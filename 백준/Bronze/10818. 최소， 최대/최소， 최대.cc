#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int data[n];

    for (int i = 0; i < n; i++)
        cin >> data[i];

    int min = data[0];
    int max = data[0];

    for (int j = 0; j < n; j++) {
        if (data[j] > max)
            max = data[j];
        if (data[j] < min)
            min = data[j];
    }

    cout << min << " " << max;
}