#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int M, N;
    cin >> M >> N;

    set <int> s1, s2;
    for (int i = 0; i < M; i++) {
        int a;
        cin >> a;

        s1.insert(a);
    }
    for (int i = 0; i < N; i++) {
        int a;
        cin >> a;

        s2.insert(a);
    }

    for (auto v : s1) {
        if (s2.count(v)) cout << v << ' ';
    }
    return 0;
}