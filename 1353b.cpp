#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    vector<int> b(n);

    for (auto &i : a) {
       cin >> i;
    }

    for (auto &i : b) {
        cin >> i;
    }

    sort(a.begin(), a.end());
    sort(b.rbegin(), b.rend());
    int res = 0;

    for (int i = 0; i < n; ++i) {
        if (i < k) {
            res += max(a[i], b[i]);
        } else {
            res += a[i];
        }
    }
    cout << res << endl;
}
int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i)
        solve();

    return 0;
}

