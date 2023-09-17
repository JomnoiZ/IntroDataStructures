#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 105;

int a[MAX_N][MAX_N];

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int N, M, R;
    cin >> N >> M >> R;

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= M; j++) {
            cin >> a[i][j];
        }
    }
    while (R--) {
        int r1, c1, r2, c2;
        cin >> r1 >> c1 >> r2 >> c2;

        if (r1 > r2 or c1 > c2) {
            cout << "INVALID\n";
            continue;
        }
        if (r2 < 1 or r1 > N or c2 < 1 or c1 > M) {
            cout << "OUTSIDE\n";
            continue;
        }

        r1 = max(r1, 1);
        c1 = max(c1, 1);
        r2 = min(r2, N);
        c2 = min(c2, M);

        int max_value = a[r1][c1];
        for (int i = r1; i <= r2; i++) {
            for (int j = c1; j <= c2; j++) {
                max_value = max(max_value, a[i][j]);
            }
        }
        cout << max_value << '\n';
    }
    return 0;
}