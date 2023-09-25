#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int n;
    cin >> n;

    while (n--) {
        int mFront, mSize, mCap, last, correction;
        cin >> mFront >> mSize >> mCap >> last >> correction;

        if (mSize <= mCap and last == (mFront + mSize) % mCap and mFront < mCap and last < mCap) cout << "OK\n";
        else {
            cout << "WRONG";
            switch (correction) {
            case 1 :
                cout << ' ' << (last - mSize + mCap) % mCap;
                break;
            case 2 : 
                cout << ' ' << (last - mFront + mCap) % mCap;
                break;
            case 3 :
                cout << ' ' << max(last + 1, mFront - last + mSize);
                break;
            case 4 :
                cout << ' ' << (mFront + mSize) % mCap;
                break;
            }
            cout << '\n';
        }
    }
    return 0;
}

/*
Input :
10
0 0 1 0 0
0 2 4 2 0
0 8 8 20 0
0 2 4 0 0
0 2 4 0 2
0 2 4 0 4
1 3 8 7 1
10 100 8 110 3
3 8 2 3 3
3 2 0 5 3

Output :
OK
OK
WRONG
WRONG
WRONG 0
WRONG 2
WRONG 4
WRONG 111
WRONG 8
WRONG 6
*/