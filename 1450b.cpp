#include <bits/stdc++.h>
#define pb push_back
#define lli long long int

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<lli> v(n);

    lli ans = 0;
    for (auto &i : v) {
       cin >> i;
       ans = max(0ll, ans+i);
    }
    cout << ans << endl;

}

int main()
{
    std::ios_base::sync_with_stdio(false);
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i)
    {
        solve();
    }

    return 0;
}

