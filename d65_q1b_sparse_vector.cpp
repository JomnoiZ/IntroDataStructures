#include <iostream>
#include <vector>
#include <map>
using namespace std;

void insert_into_sv(map<int,int> &v, int pos, int value) {
    //your code here
    auto it = v.lower_bound(pos), it2 = it;
    vector <pair <int, int>> tmp;
    while (it2 != v.end()) {
        tmp.emplace_back(it2->first + 1, it2->second);
        it2++;
    }
    v.erase(it, v.end());
    v[pos] = value;
    v.insert(tmp.begin(), tmp.end());
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(0);
    int n;
    map<int,int> v;

    cin >> n;
    for (int i = 0;i < n;i++) {
        int a,b;
        cin >> a >> b;
        insert_into_sv(v,a,b);
    }

    cout << v.size() << "\n";
    for (auto &x : v) {
        cout << x.first << ": " << x.second << "\n";
    }
}