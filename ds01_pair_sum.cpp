#include <iostream>
#include <vector>
using namespace std;

bool mem[2000005];

int main() {
    int N, M;
    cin >> N >> M;
    
    vector <int> A(N);
    for (auto &x : A) cin >> x;

    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            mem[A[i] + A[j]] = true;
        }
    }

    while (M--) {
        int S;
        cin >> S;

        if (mem[S] == true) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}