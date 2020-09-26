#include <bits/stdc++.h>
#define pb push_back

using namespace std;

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;

    int diff = n / k;
    int a1 = min(m, diff);
    int a2 = (m - a1 + k - 2) / (k-1);

    cout << a1 - a2 << endl;

}

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i)
    {
        solve();
    }

    return 0;
}
