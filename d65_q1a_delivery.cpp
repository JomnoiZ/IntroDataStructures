#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int n, m;
    cin >> n >> m;

    vector <int> p(m + 10);
    for (int i = 1; i <= m; i++) cin >> p[i];

    vector <int> total;
    queue <int> q1, q2;
    total.push_back(0);
    for (int i = 1; i <= n; i++) {
        int o, a, b;
        cin >> o;

        if (o == 1) {
            cin >> a >> b;

            if (a == 1) q1.push(b);
            else q2.push(b);
        }
        else {
            if (q2.empty() or (!q1.empty() and !q2.empty() and q1.front() <= q2.front())) {
                total.push_back(total.back() + q1.front());
                q1.pop();
            }
            else {
                total.push_back(total.back() + q2.front());
                q2.pop();
            }
        }
    }

    for (int i = 1; i <= m; i++) {
        auto it = lower_bound(total.begin(), total.end(), p[i]);
        if (it == total.end()) cout << "-1 ";
        else cout << it - total.begin() << ' ';
    }
    return 0;
}