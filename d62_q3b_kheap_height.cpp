#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int n, k;
    cin >> n >> k;

    if (k == 1) cout << n - 1;
    else if (n == 1) cout << 0;
    else {
        n--;
        int ans = 0;
        while (n > 0) {
            ans++;
            n = (n - 1) / k;
        }
        cout << ans;
    }
    return 0;
}