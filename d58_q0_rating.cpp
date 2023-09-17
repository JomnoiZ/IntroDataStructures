#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int N;
    cin >> N;

    map <string, pair <int, int>> course, instructor;
    for (int i = 1; i <= N; i++) {
        string s, t;
        int score;
        cin >> s >> t >> score;

        course[s].first += score;
        course[s].second++;

        instructor[t].first += score;
        instructor[t].second++;
    }

    for (auto i : course) cout << i.first << " " << fixed << setprecision(2) << 1.0 * i.second.first / i.second.second << "\n";
    for (auto i : instructor) cout << i.first << " " << fixed << setprecision(2) << 1.0 * i.second.first / i.second.second << "\n";
    return 0;
}