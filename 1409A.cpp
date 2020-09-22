#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int a, b;
    std::cin >> a >> b;
    int diff = abs(a - b) + 9;
    std::cout << diff/10 << std::endl;
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

