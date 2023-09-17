#include <iostream>
#include <vector>
using namespace std;

void reverse(vector <int> &v, int a, int b) {
    for (int i = a; i <= (a + b) / 2; i++) swap(v[i], v[b - (i - a)]);
}

int main() {
    int n, a, b;
    cin >> n;

    vector <int> v(n);
    for (auto &x : v) cin >> x;

    cin >> a >> b;

    reverse(v, a, b);

    for (auto &x : v) cout << x << ' ';
    return 0;
}