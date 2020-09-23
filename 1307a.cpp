#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, d;
    cin >> n >> d;
    std::vector<int> v(n);

    for (auto &i : v) {
        cin >> i;
    }

    while (d--) {
        for (int i = 1; i < n; i++) {
            if (v[i] > 0) {
                v[i]--;
                v[i-1]++;
                break;
            }

        }
    }
    cout << v[0]<< endl;

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

