#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int N, K, V;
    cin >> N >> K >> V;

    vector <int> v(N);
    for (auto &x : v) cin >> x;

    v.insert(v.begin() + K, V);
    int i = K, j = i + 1;
    if (i + 1 < N and v[i] == v[i + 1]) j = i + 1;
    if (i - 1 >= 0 and v[i] == v[i - 1]) j = i - 1, swap(i, j);
    while (i >= 0 and j <= N and v[i] == v[j]) {
        int cnt = 2, x = i, y = j;
        while (i - 1 >= 0 and v[i - 1] == v[j]) i--, cnt++;
        while (j + 1 <= N and v[j + 1] == v[i]) j++, cnt++;

        if (cnt >= 3) i--, j++;
        else {
            i = x, j = y;
            break;
        }
    }

    for (int k = 0; k <= i; k++) cout << v[k] << ' ';
    for (int k = j; k <= N; k++) cout << v[k] << ' ';
    return 0;
}