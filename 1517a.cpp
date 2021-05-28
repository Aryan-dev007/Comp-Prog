#include <bits/stdc++.h>
typedef long long ll;

void solve() {
    ll n;
    std::cin >> n;
    ll k = n / 2050, s = 0;
    while (k) {
        s += (k % 10);
        k /= 10;
    }
    if (n % 2050) std::cout << -1 << std::endl;
    else  std::cout << s << std::endl;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int t;
    std::cin >> t;

    for (int i=0; i<t; ++i)
        solve();

    return 0;
}

