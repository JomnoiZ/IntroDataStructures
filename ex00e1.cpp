#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int H, M, X;
    cin >> H >> M >> X;

    M += X;
    H += M / 60;
    M %= 60;
    H %= 24;

    char h1 = H / 10 + '0';
    char h2 = H % 10 + '0';
    char m1 = M / 10 + '0';
    char m2 = M % 10 + '0';
    cout << h1 << h2 << ' ' << m1 << m2 << '\n';
    return 0;
}