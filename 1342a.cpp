#include <bits/stdc++.h>
#define pb push_back

using namespace std;

void solve()
{
    long long int x, y, a, b;
    /* int x = rand() % 10000000000; */
    /* int y = rand() % 10000000000; */
    /* int a = rand() % 10000000000; */
    /* int b = rand() % 10000000000; */

    cin >> x >> y;
    cin >> a >> b;
    long long int ans = 0;

    /* while (x && y > 0) { */
    /*     ans += b; */
    /*     x--; */
    /*     y--; */
    /* } */

    /* int mx = max(x, y); */
    /* int mi = min(x, y); */
    /* ans += (b * mi); */
    /* ans += (a * (mx - mi)); */
    /* cout << ans << endl; */

    if (2 * a < b) {
        cout << (x + y) * a << endl;
    } else {
        cout << min(x, y) * b + abs(x-y) * a << endl;
    }

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
