#include <bits/stdc++.h>
using namespace std;

int relation(int S, long long a, long long b) {
    if (a == b) return 4;

    long long x = a, y = b;
    if (a > b) swap(a, b);
    for (int i = 1; i <= S; i++) {
        if (a * S + i == b) return 1;
    }
    
    while (a < b) b = (b - 1) / S;
    if (a == b) return 2;

    int cnt1 = 0, cnt2 = 0;
    while (x > 0) {
        x = (x - 1) / S;
        cnt1++;
    }
    while (y > 0) {
        y = (y - 1) / S;
        cnt2++;
    }
    if (cnt1 != cnt2) return 3;
    return 4;
}

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int n;
    cin >> n;

    while (n--) {
        int S;
        long long a, b;
        cin >> S >> a >> b;

        cout << relation(S, a, b) << ' ';
    }
    return 0;
}