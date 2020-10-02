#include <bits/stdc++.h>
#define pb push_back
#define lli long long int

using namespace std;

void solve()
{
    int n;
    cin >> n;

    std::vector<int> v(n);
    for (auto &i : v) {
        cin >> i;
    };

    for (int i = 1; i < n-1; ++i) {
        if (v[i] > v[i - 1] && v[i] > v[i+1]) {
            cout << "YES" << endl;
            cout << i << ' ' << i + 1 << ' ' << i + 2 << endl;
            return;
        }
    }
    cout << "NO" << endl;

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

