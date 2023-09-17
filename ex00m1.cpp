#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int N, M;
    cin >> N >> M;

    vector <int> T(N + 1);
    priority_queue <pair <int, int>> pq;
    for (int i = 1; i <= N; i++) {
        cin >> T[i];

        pq.emplace(0, i);
    }

    while (M--) {
        auto [t, i] = pq.top();
        pq.pop();

        cout << -t << '\n';

        pq.emplace(t - T[i], i);
    }
    return 0;
}
