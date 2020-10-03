#include <bits/stdc++.h>
#define pb push_back
#define lli long long int

using namespace std;

void solve()
{
    lli a, b;
    cin >> a >> b;
    int c = 0;

    if (a > b)  {
        swap(a, b);
    }

    while  (a * 2 <= b) {
        c++;
        a *= 2;
    }

    cout << ((a != b) ? -1 : (c+2)/3) << endl;

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
