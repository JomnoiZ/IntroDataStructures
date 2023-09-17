#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int Q;
    cin >> Q;

    vector <int> vec;
    while (Q--) {
        string op;
        cin >> op;

        if (op == "pb") {
            int x;
            cin >> x;

            vec.push_back(x);
        }
        else if (op == "sa") sort(vec.begin(), vec.end());
        else if (op == "sd") sort(vec.rbegin(), vec.rend());
        else if (op == "r") reverse(vec.begin(), vec.end());
        else if (op == "d") {
            int i;
            cin >> i;

            vector <int> tmp;
            for (int j = 0; j < vec.size(); j++) {
                if (j != i) tmp.push_back(vec[j]);
            }
            vec = tmp;
        }
    }
    for (auto &x : vec) cout << x << ' ';
    return 0;
}