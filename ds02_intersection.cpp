#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int N, M;
    cin >> N >> M;

    vector <int> v1(N), v2(M);
    for (auto &x : v1) cin >> x;
    for (auto &x : v2) cin >> x;

    vector <int> intersects;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (v1[i] == v2[j]) {
                intersects.push_back(v1[i]);
                break;
            }
        }
    }

    sort(intersects.begin(), intersects.end());
    intersects.resize(unique(intersects.begin(), intersects.end()) - intersects.begin());

    for (auto v : intersects) cout << v << ' ';
    return 0;
}