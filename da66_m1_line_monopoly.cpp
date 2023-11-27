#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int N;
    cin >> N;

    set <pair <int, int>> range;
    while (N--) {
        int o, a, b;
        cin >> o;

        if (o == 1) {
            cin >> a >> b;

            auto it = range.lower_bound(make_pair(a, b));
            while (it != range.end() and it->first <= b + 1) {
                a = min(a, it->first);
                b = max(b, it->second);
                it = range.erase(it);
            }
            while (it != range.begin() and a <= (--it)->second + 1) {
                a = min(a, it->first);
                b = max(b, it->second);
                it = range.erase(it);
            }
            range.emplace(a, b);
        }
        else cout << range.size() << '\n';
    }
    return 0;
}