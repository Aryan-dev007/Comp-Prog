#include <bits/stdc++.h>
#define pb push_back
#define lli long long int
using namespace std;

void solve() {
    string s;
    cin >> s;

    int dig = s[0] - '0' - 1;
    int len = s.size();
    cout << dig*10 + len * (len + 1) / 2 << '\n';
}


int main()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i)
    {
        solve();
    }

    return 0;
}

