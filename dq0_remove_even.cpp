#include <iostream>
#include <vector>
using namespace std;

void remove_even(vector <int> &v, int a, int b) {
    vector <int> tmp;
    for (int i = 0; i < v.size(); i++) {
        if (!(i % 2 == 0 and a <= i and i <= b)) tmp.push_back(v[i]);
    }
    v = tmp;
}

int main() {
    int n, a, b;
    cin >> n;

    vector <int> v(n);
    for (auto &x : v) cin >> x;

    cin >> a >> b;

    remove_even(v, a, b);
    for (auto &x : v) cout << x << ' ';
    return 0;
}