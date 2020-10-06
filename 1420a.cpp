#include <bits/stdc++.h>
#define pb push_back
#define lli long long int

using namespace std;



void solve()
{
    int n = 0;
    cin >> n;
    vector<lli> v(n);

    for (auto &i : v) {
        cin >> i;
    }

    bool t = false;

    for (int i = 1; i < n; ++i) {
        if (v[i] >= v[i - 1]) {
            t = true;
            break;
        }
    }

    cout << (t ? "YES" : "NO") << endl;
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

