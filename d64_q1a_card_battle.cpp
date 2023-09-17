#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    multiset <int> s;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;

        s.insert(x);
    }

    for (int i = 1; i <= m; i++) {
        int o;
        cin >> o;

        while (o--) {
            int x;
            cin >> x;

            auto it = s.upper_bound(x);
            if (it == s.end()) {
                cout << i;
                return 0;
            }
            s.erase(it);
        }
    }
    cout << m + 1;
    return 0;
}