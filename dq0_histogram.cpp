#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int N;
    cin >> N;

    map <string, int> mp;
    for (int i = 0; i < N; i++) {
        string s;
        cin >> s;

        mp[s]++;
    }

    for (auto [s, v] : mp) {
        if (v > 1) cout << s << ' ' << v << '\n';
    }
    return 0;
}