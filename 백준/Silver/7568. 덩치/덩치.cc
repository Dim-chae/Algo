#include <bits/stdc++.h>

using namespace std;

struct Person {
    int weight;
    int height;
    int rank;
};

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int N;
    cin >> N;

    Person p[51];

    for (int i = 0; i < N; i++) {
        cin >> p[i].weight >> p[i].height;
        p[i].rank = 1;
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (p[i].weight < p[j].weight && p[i].height < p[j].height) p[i].rank++;
        }
    }
    
    for (int i = 0; i < N; i++)
        cout << p[i].rank << ' ';
}
