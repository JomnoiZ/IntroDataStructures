#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int N;
    cin >> N;

    set <int> s;
    for (int i = 0; i < N; i++) {
        int d;
        cin >> d;

        s.insert(d);
    }
    if (s.size() == N and *s.begin() == 1 and *s.rbegin() == N) cout << "YES";
    else cout << "NO";
    return 0;
}