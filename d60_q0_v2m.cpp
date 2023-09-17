#include <bits/stdc++.h>
using namespace std;

map <int, string> vector_to_map(vector <pair <int, string>>::iterator start, vector <pair <int, string>>::iterator end) {
    map <int, string> m;
    while (start < end) {
        if (!m.count(start->first)) m[start->first] = start->second;
        start++;
    }
    return m;
}

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int n, a, b;
    cin >> n >> a >> b;

    vector <pair <int, string>> v(n);
    for (int i = 0; i < n; i++) cin >> v[i].first;
    for (int i = 0; i < n; i++) cin >> v[i].second;

    map <int, string> m = vector_to_map(v.begin() + a, v.begin() + b);
    cout << "-------- result -----------\n";
    cout << "Size of map = " << m.size() << '\n';
    for (auto &x : m) cout << "(" << x.first << "," << x.second << ")\n";
    return 0;
}