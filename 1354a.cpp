#include <bits/stdc++.h>
#define pb push_back
#define lli long long int

using namespace std;

void solve()
{
    lli a, b, c, d;
    cin >> a >> b >> c >> d;
    // a -> time needed to complete sleep
    // b -> time to sleep
    // c -> time set to alarm if wakes a is not completed
    // d -> time to fall asleep

    if (a <= b) {
        cout << b << endl;
    } else if (c - d <= 0) {
        cout << -1 << endl;
    } else {
        a -= b;
        lli x = c - d;
        cout << (b + (a + x - 1) / x * c) << endl;
    }
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

