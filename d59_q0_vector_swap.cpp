#include <iostream>
#include <vector>
using namespace std;

void vector_swap(vector <int> &v1, vector <int> &v2, int start1, int end1, int start2, int end2) {
    vector <int> tmp1, tmp2;
    for (int i = 0; i < start1; i++) tmp1.push_back(v1[i]);
    for (int i = start2; i < end2; i++) tmp1.push_back(v2[i]);
    for (int i = end1; i < v1.size(); i++) tmp1.push_back(v1[i]);

    for (int i = 0; i < start2; i++) tmp2.push_back(v2[i]);
    for (int i = start1; i < end1; i++) tmp2.push_back(v1[i]);
    for (int i = end2; i < v2.size(); i++) tmp2.push_back(v2[i]);

    v1 = tmp1, v2 = tmp2;
}

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int n, m;
    cin >> n;
    vector <int> v1(n);
    for (auto &x : v1) cin >> x;

    cin >> m;
    vector <int> v2(m);
    for (auto &x : v2) cin >> x;

    int s1, e1, s2, e2;
    cin >> s1 >> e1 >> s2 >> e2;

    vector_swap(v1, v2, s1, e1, s2, e2);

    cout << "v1 has " << v1.size() << '\n';
    for (auto &x : v1) cout << x << ' ';
    cout << '\n';

    cout << "v2 has " << v2.size() << '\n';
    for (auto &x : v2) cout << x << ' ';
    cout << '\n';
    return 0;
}