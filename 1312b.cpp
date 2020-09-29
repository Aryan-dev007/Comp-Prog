#include <bits/stdc++.h>
#define pb push_back

using namespace std;

void solve()
{
    int n;
    cin >> n;
    std::vector<int> v(n);

    for (auto &i : v) {
        cin >> i;
    }

    sort(v.begin(), v.end(), greater<int>());
    for (auto i : v) {
        cout << i << ' ';
    }
    cout << endl;
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

