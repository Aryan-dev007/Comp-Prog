#include <bits/stdc++.h>
#define pb push_back
#define lli long long int

using namespace std;

void solve()
{
    int n;
    vector<int> v(3);

    for (auto &i : v) {
        cin >> i;
    }
    cin >> n;
    sort(v.begin(), v.end());

    int res = (n - ((2 * v[2]) - v[1] - v[0]));  // This is the way

    cout << ((res % 3 != 0 || res < 0) ? "NO" : "YES") << endl;  // This is the condition

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

/* Dividing something in equals follows same rule as mentioned above whether it's 2 or 4 persons it does'nt matter */
