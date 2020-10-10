#include <bits/stdc++.h>
#define pb push_back
#define lli long long int

using namespace std;

void solve()
{
    int n;
    string s;
    cin >> n;
    cin >> s;

    for (int i = 0; i < n; ++i) {
        cout << s[n-1];
    }
    cout << endl;
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

