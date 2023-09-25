#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int n, w;
    cin >> n >> w;

    vector <int> data(n);
    for (auto &x : data) cin >> x;

    multiset <int> s(data.begin(), data.begin() + w + 1);
    auto it = next(s.begin(), w / 2);

    cout << *it << ' ';
    for (int i = w + 1; i < data.size(); i++) {
        s.insert(data[i]);
        if (data[i] < *it) it--;
        if (data[i - w - 1] <= *it) it++;
        s.erase(s.lower_bound(data[i - w - 1]));

        cout << *it << ' ';
    }
    return 0;
}