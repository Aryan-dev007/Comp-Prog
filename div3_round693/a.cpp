#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

void solve() {
    long long w, h, n, cnt=0;
    cin >> w >> h >> n;
    int res = 1;
    while(w%2 == 0) {
        w /= 2;
        res *= 2;
    }
    while(h%2==0) {
        h /= 2;
        res *= 2;
    }
    cout << (res >= n ? "YES" : "NO" ) << endl;
}

int main() {
    int t;
    cin >> t;
    for (int i=0; i<t; i++)
        solve();
    return 0;
}
