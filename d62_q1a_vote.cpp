#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int N, K;
    cin >> N >> K;

    map <string, int> scores;
    for (int i = 1; i <= N; i++) {
        string s;
        cin >> s;

        scores[s]--;
    }
    vector <pair <int, string>> scores_vec;
    for (auto [name, score] : scores) scores_vec.push_back({score, name});
    sort(scores_vec.begin(), scores_vec.end());

    int ans = 0;
    for (auto [score, name] : scores_vec) {
        if (K-- == 0 or score == 0) break;
        ans = -score;
    }
    cout << ans;
    return 0;
}