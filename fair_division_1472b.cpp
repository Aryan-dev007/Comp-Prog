#include<bits/stdc++.h>
#define endl '\n'

using namespace std;

void solve() {
    int n,sum=0,cnt1=0,cnt2=0;
    cin >> n;
    for (int i=0; i<n; ++i) {
        int k;
        cin >> k;

        if (k == 1) cnt1++;
        else cnt2++;
    }

    if ((cnt1 + 2 * cnt2) % 2 != 0) {
        cout << "NO" << endl;
    } else {
        sum = ((cnt1 + 2 * cnt2) / 2);
        if (sum % 2 == 0 || (sum % 2 == 1 && cnt1 != 0)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}

int main() {
    int t;
    cin >> t;
    for (int i=0; i<t; ++i) solve();
    return 0;
}
