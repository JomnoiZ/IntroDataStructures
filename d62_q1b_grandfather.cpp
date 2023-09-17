#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int N, M;
    cin >> N >> M;

    map <long long, long long> parent;
    while (N--) {
        long long f, s;
        cin >> f >> s;

        parent[s] = f;
    }
    while (M--) {
        long long a, b;
        cin >> a >> b;

        if (a != b and parent.count(a) and parent.count(parent[a]) and parent.count(b) and parent.count(parent[b]) and parent[parent[a]] == parent[parent[b]]) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}