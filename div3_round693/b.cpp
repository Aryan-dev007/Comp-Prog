#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int cnt1=0, cnt2=0;
    for (int i=0; i<n; i++) {
        int c;
        cin >> c;
        if (c == 1) {
            cnt1++;
        } else cnt2++;
    }

    if ((cnt1 + 2 * cnt2) % 2 != 0) {
        cout << "NO\n";
    } else {
        int sum = (cnt1 + 2 * cnt2) / 2;
        if (sum % 2 == 0 || sum % 2 == 1 && cnt1 != 0) {
            cout << "YES\n";
        } else {
            cout << "NO\n" ;
        }
    }
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;

    for (int i=0; i<t; ++i)
        solve();

    return 0;
}
