#include <iostream>
#include <vector>
using namespace std;

void reverse(vector <int> &v, vector <int> ::iterator a, vector <int> ::iterator b) {
    b--;
    while (a < b) {
        swap(*a, *b);
        a++;
        b--;
    }
}

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    
    int n, a, b;
    cin >> n;
    vector <int> v(n);
    for (auto &x : v) cin >> x;

    cin >> a >> b;

    reverse(v, v.begin() + a, v.begin() + b + 1);

    for (auto &x : v) cout << x << ' ';
    return 0;
}