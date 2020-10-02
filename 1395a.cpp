#include <bits/stdc++.h>
#define pb push_back
#define lli long long int

using namespace std;

void solve()
{
   lli r, g, b, w;
   cin >> r >> g >> b >> w;

   w = w % 2 + r % 2 + g % 2 + b % 2;

   cout << ((w < 2  || (w > 2 && r * g * b)) ? "Yes" : "No") << endl;

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

