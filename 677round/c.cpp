#include <bits/stdc++.h>
#define pb push_back
#define lli long long int
using namespace std;

void solve() {
    int n;
    cin >> n;
    std::vector<int> v(n);
    for (auto &i : v) {
        cin >> i;
    }
    int maxe = *max_element(v.begin(), v.end());
    int idx = -1;
    for (int i = 0; i < n; ++i) {
       if (v[i] != maxe) {
           continue;
       }
       if (i > 0 && v[i-1] != maxe) {
          idx = i + 1;
       }

       if (i < n-1 && v[i+1] != maxe) {
          idx = i + 1;
       }
    }
    cout << idx << '\n';
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

