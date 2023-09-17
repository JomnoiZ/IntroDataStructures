#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int N, M, A;
    cin >> N >> M >> A;

    vector <int> K(N + 1);
    for (int i = 1; i <= N; i++) cin >> K[i];

    vector <set <pair <int, int>, greater <pair <int, int>>>> s(N + 1);
    map <pair <int, int>, int> mp;
    while (A--) {
        char o;
        cin >> o;

        if (o == 'B') {
            int u, i, v;
            cin >> u >> i >> v;

            if (mp.count(make_pair(u, i))) s[i].erase(make_pair(mp[make_pair(u, i)], u));
            mp[make_pair(u, i)] = v;
            s[i].insert(make_pair(mp[make_pair(u, i)], u));
        }
        else {
            int u, i;
            cin >> u >> i;

            if (mp.count(make_pair(u, i))) {
                s[i].erase(make_pair(mp[make_pair(u, i)], u));
                mp.erase(make_pair(u, i));
            }
        }
    }

    vector <vector <int>> ans(M + 1);
    for (int i = 1; i <= N; i++) {
        while (!s[i].empty() and K[i] > 0) {
            auto [v, u] = *s[i].begin();
            s[i].erase(s[i].begin());
            ans[u].push_back(i);
            K[i]--;
        }
    }

    for (int i = 1; i <= M; i++) {
        if (ans[i].empty()) {
            cout << "NONE\n";
            continue;
        }

        for (auto v : ans[i]) cout << v << ' ';
        cout << '\n';
    }
    return 0;
}