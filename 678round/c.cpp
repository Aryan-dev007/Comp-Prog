#include <bits/stdc++.h>
#define pb push_back
#define lli long long int
using namespace std;
lli factorial(lli n)
{
    if(n > 1)
        return n * factorial(n - 1);
    else
        return 1;
}

void solve() {
    lli x, n, pos;
    cin >> x >> n >> pos;
    lli ii;
    if (x % pos == 0) {
     ii = x / pos;
    } else {
       ii = x % pos;
    }
    ii *= 2;
    lli jj = n % pos;
    lli fact = abs(jj - ii);

    cout << factorial(fact) << '\n';
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t = 1;

    for (int i = 0; i < t; ++i)
    {
        solve();
    }

    return 0;
}
