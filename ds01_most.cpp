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

    int max_appear = 0;
    string win;
    for (auto [name, freq] : mp) {
        if (max_appear <= freq) {
            max_appear = freq;
            win = name;
        }
    }
    cout << win << ' ' << max_appear;
    return 0;
}