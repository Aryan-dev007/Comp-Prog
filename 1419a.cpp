#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    string v;
    cin >> v;

    bool odd = false, even = false;

    for (int i = 1; i <= n; ++i) {
        if ( i % 2 == 1 ) {
            odd |= ((v[i-1] - '0') % 2 == 1);
        } else {
            even |= ((v[i-1] - '0') % 2 == 0);
        }
    }

    if (n % 2 == 1) {
        cout << (odd ? 1 : 2) << endl;
    } else  {
        cout << (even ? 2 : 1) << endl;
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

