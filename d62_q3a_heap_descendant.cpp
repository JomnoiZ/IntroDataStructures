#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int n, a;
    cin >> n >> a;

    queue <int> q;
    vector <int> ans;
    q.push(a);
    while (!q.empty()) {
        int u = q.front();
        q.pop();

        ans.push_back(u);
        if (u * 2 + 1 < n) q.push(u * 2 + 1);
        if (u * 2 + 2 < n) q.push(u * 2 + 2);
    }

    cout << ans.size() << '\n';
    for (auto v : ans) cout << v << ' ';
    return 0;
}