#include<bits/stdc++.h>
#define endl '\n'

using namespace std;

void solve() {
    int n,k=3;
    cin >> n;
    while(n%k != 0) {
        k = 2*k+1;
    }
    cout << n/k << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}
