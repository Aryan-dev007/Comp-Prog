#include <bits/stdc++.h>
#define pb push_back

using namespace std;

void solve()
{
    long long int a, b, c;
    cin >> a >> b >> c;

    cout << ((a < c) ? 1 : -1) << ' ';
    cout << ((c < a * b) ? b : -1) << endl;

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
