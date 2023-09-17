#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int n, w;
    cin >> n >> w;

    vector <int> a(n);
    for (auto &x : a) cin >> x;

    multiset <int, greater <int>> L;
    multiset <int> R;
    for (int i = 0; i < n; i++) {
        if (L.empty() or a[i] <= *L.begin()) L.insert(a[i]);
        else R.insert(a[i]);

        while (L.size() < R.size()) {
            L.insert(*R.begin());
            R.erase(R.begin());
        }
        while (L.size() > R.size() + 1) {
            R.insert(*L.begin());
            L.erase(L.begin());
        }

        if (i >= w) {
            cout << *L.begin() << ' ';
            if (a[i - w] <= *L.begin()) L.erase(L.lower_bound(a[i - w]));
            else R.erase(R.lower_bound(a[i - w]));
        }
    }
    return 0;
}