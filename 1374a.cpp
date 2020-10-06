#include <bits/stdc++.h>
#define pb push_back
#define lli long long int

using namespace std;

void solve()
{
    lli x, y, z;
    cin >> x >> y >> z;
    cout << ((z - y)/x * x) + y << endl;

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

