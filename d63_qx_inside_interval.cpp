#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int n, m;
    cin >> n >> m;

    vector <pair <int, int>> vec;
    vec.emplace_back(-1, -1);
    for (int i = 1; i <= n; i++) {
        int a, b;
        cin >> a >> b;

        vec.emplace_back(a, b);
    }

    sort(vec.begin(), vec.end());

    while (m--) {
        int x;
        cin >> x;

        auto it = upper_bound(vec.begin(), vec.end(), make_pair(x, 1000000001));
        if (it == vec.begin()) cout << "0 ";
        else if (x <= prev(it)->second) cout << "1 ";
        else cout << "0 ";
    }
    return 0;
}