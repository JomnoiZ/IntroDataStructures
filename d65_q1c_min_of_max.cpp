#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int n, m;
    cin >> n >> m;

    vector <int> p(n), t(n);
    for (auto &x : p) cin >> x;
    for (auto &x : t) cin >> x;

    multiset <int> s;
    vector <int> po(m, 1);
    for (int i = 0; i < m; i++) s.insert(1);
    for (int i = 0; i < n; i++) {
        s.erase(s.lower_bound(po[t[i]]));
        po[t[i]] = max(po[t[i]], p[i]);
        s.insert(po[t[i]]);

        cout << *s.begin() << ' ';
    }
    return 0;
}