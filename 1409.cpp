#include <bits/stdc++.h>

#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int a, b, t, k, n;
    std::cin >> a >> b >> t >> k >> n;
    long long int ans = 1e18;

    for (int i = 0; i < 2; ++i) {
        int da = std::min(n , a-t);
        int db = std::min(n-da, b-k);

        ans = std::min(ans, (a-da) * (1ll) * (b-db));
        std::swap(a, b);
        std::swap(t, k);
    }
    std::cout << ans << std::endl;
}
int main()
{
    int t;
    std::cin >> t;

    for (int i = 0; i < t; ++i)
    {
        solve();
    }

    return 0;
}
