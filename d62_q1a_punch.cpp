#include <iostream>
#include <vector>
using namespace std;

vector <string> punch(vector <string> &v, vector <string>::iterator it, int k) {
    vector <string>::iterator l = it, r = it;
    for (int i = 0; i < k and l != v.begin(); i++) l--;
    for (int i = 0; i < k and r + 1 != v.end(); i++) r++;
    v.erase(l, r + 1);
    return v;
}

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int n, j, k;
    cin >> n >> j >> k;

    vector <string> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }    

    vector <string> result = punch(v, v.begin() + j, k);

    cout << "Result after punch\n";
    for (auto &x : result) cout << x << '\n';
    return 0;
}