#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int n, m, start;
    cin >> n >> m >> start;

    vector <int> table(1e5 + 1, 0), val(1e5 + 1, -1);
    table[0] = val[0] = start;
    for (int i = 0; i < n; i++) {
        int a, s;
        cin >> a >> s;

        val[a] = s;
    }
    for (int i = 1; i <= 1e5; i++) {
        if (val[i] == -1) val[i] = val[i - 1];
        table[i] += table[i - 1] + val[i];
    }

    while (m--) {
        int p, x;
        cin >> p >> x;

        if (p <= table[x]) {
            cout << lower_bound(table.begin(), table.end(), p) - table.begin() << ' ';
        }
        else {
            cout << lower_bound(table.begin(), table.end(), p + table[x]) - table.begin() << ' ';
        }
    }
    return 0;
}