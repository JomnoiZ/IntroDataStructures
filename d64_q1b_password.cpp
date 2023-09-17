#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int N, M, L;
    cin >> N >> M >> L;

    vector <int> add(L);
    for (auto &x : add) cin >> x;

    set <string> mp;
    for (int i = 0; i < N; i++) {
        string s;
        cin >> s;

        for (int j = 0; j < L; j++) s[j] = ((s[j] - 'a' - add[j]) % 26 + 26) % 26 + 'a';
        mp.insert(s);
    }

    while (M--) {
        string s;
        cin >> s;

        if (mp.count(s)) cout << "Match\n";
        else cout << "Unknown\n";
    }
    return 0;
}