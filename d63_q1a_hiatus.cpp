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
        int a, b;
        cin >> a >> b;

        auto it = lower_bound(vec.begin(), vec.end(), make_pair(a, b));
        if (*it == make_pair(a, b)) cout << "0 0 ";
        else if (it == vec.begin()) cout << "-1 -1 ";
        else cout << (--it)->first << ' ' << it->second << ' ';
    }
    return 0;
}