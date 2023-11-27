#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 5e5 + 5;

int n, cnt;
bool invalid[MAX_N];

void solve(int u) {
    if (u >= n) return;

    cnt--;
    invalid[u] = true;
    solve(2 * u + 1);
    solve(2 * u + 2);
}

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int m;
    cin >> n >> m;

    cnt = n;
    solve(m);

    cout << cnt << '\n';
    for (int i = 0; i < n; i++) {
        if (invalid[i] == false) cout << i << ' ';
    }
    return 0;
}