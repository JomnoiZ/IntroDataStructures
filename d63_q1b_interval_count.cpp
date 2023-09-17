#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int n, m, k;
    cin >> n >> m >> k;

    vector <int> vec(n + 1);
    vec[0] = -1e9;
    for (int i = 1; i <= n; i++) cin >> vec[i];

    sort(vec.begin(), vec.end());

    while (m--) {
        int x;
        cin >> x;

        cout << upper_bound(vec.begin(), vec.end(), x + k) - lower_bound(vec.begin(), vec.end(), x - k) << ' ';
    }
    return 0;
}