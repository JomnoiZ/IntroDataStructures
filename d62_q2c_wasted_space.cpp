#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int n, m = 1;
    cin >> n;

    while (m < n) m *= 2;
    cout << m - n;
    return 0;
}