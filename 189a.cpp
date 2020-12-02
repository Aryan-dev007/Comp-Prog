#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, b) for (int i=a; i < b; i++)
typedef long long ll;
ll arr[4002];

void solve() {
    ll n, a, b, c;
    cin >> n >> a >> b >> c;
    for (int i = 1; i <= n; ++i) arr[i] = -1e8;

    for (int i = 1; i <= n; ++i) {
        if (i >= a) arr[i] = max(arr[i], arr[i-a]+1);
        if (i >= b) arr[i] = max(arr[i], arr[i-b]+1);
        if (i >= c) arr[i] = max(arr[i], arr[i-c]+1);
    }
    cout << arr[n] << '\n';

}

int main()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t=1;

    REP(i, 0, t)
        solve();

    return 0;
}

