#include <bits/stdc++.h>
#define pb push_back
#define lli long long int
#define endl '\n'

using namespace std;


void solve()
{
    int n;
    cin >> n;
    std::vector<int> v(n);

    for (auto &i : v) {
       cin >> i;
    }

    int sum = v[0];

    for (int i = 1; i < n-1; ++i) {
       if (sum + v[i] == 0) {
           for (int j = i; j < n; ++j) {
               if (v[j] + sum != 0) {
                  swap(v[i], v[j]) ;
               }
           }
       }
       sum += v[i];
    }


    int x = accumulate(v.begin(), v.end(), 0);
    if (x == 0) {
        cout << "NO";
    } else {
            cout << "YES" << endl;
        for (auto i : v) {
            cout << i << ' ';
        }
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

