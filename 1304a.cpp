#include <bits/stdc++.h>

using namespace std;

void solve()
{
    long long int x, y, a, b;
    cin >> x >> y >> a >> b;

    /* int res = (y-x) / (a+b); */

    /* if (res) { */
    /*     cout << res << endl; */
    /* } else  { */
    /*     cout << "-1" << endl; */
    /* } */
    cout << ((y-x) % (a+b) == 0 ? (y-x)/(a+b) : -1) << endl;
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

