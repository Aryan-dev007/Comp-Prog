#include <bits/stdc++.h>
#define pb push_back

using namespace std;

void solve()
{
    int x, n, m;
    // n = h/2 + 10
    // m = h - 10
    cin >> x >> n >> m;

    if (x <= 10 && m > 0) {
       cout << "YES" << endl;
    }
    else {
    for (int i = 0; i < n; i++) {
        /* cout << i << ' ' << "x = " << x << endl; */
        x /= 2;
        /* cout << x << endl; */
        x += 10;
    }

    x -= (m * 10);
    /* cout << "first -- " <<  x << endl; */

    if (x > 0) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }

}
}

void fast_solve()
{
    int x, n, m;
    cin >> x >> n >> m;

    while(x > 0 && n && x/2+10 < x) {
        n--;
        x = x/2 + 10;
    }
    if (x <= m * 10) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
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

