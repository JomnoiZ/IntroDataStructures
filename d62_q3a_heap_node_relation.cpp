#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int n, m;
    cin >> n >> m;

    while (m--) {
        int a, b;
        cin >> a >> b;

        if (a == b) cout << "a and b are the same node\n";
        else {
            bool t = false;
            if (a > b) swap(a, b), t = true;
            while (b > a) b = (b - 1) / 2;
            if (a == b) {
                if (t == true) cout << "b is an ancestor of a\n";
                else cout << "a is an ancestor of b\n";
            }
            else {
                cout << "a and b are not related\n";
            }
        }
    }
    return 0;
}