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

    int first = 0;
    int last = 0;
    int count = 0;

    for (int i = 0; i < n; i++) {
       if (v[i] == 1) {
          first = i;
          break;
       }
    }

    for (int i = n; i > 0; i--) {
        if (v[i] == 1) {
           last = i;
           break;
        }
    }
    for (int i = first; i <= last; ++i) {
        if (v[i] == 0) {
           count++;
        }
    }

    cout << count << '\n';
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

