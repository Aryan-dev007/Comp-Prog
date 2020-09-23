#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    std::vector<int> v(n);

    for (auto &i : v) {
        cin >> i;
    }

    for (int i = 0; i < n; i++) {
        if (v[i] % 2 == 0) {
            cout << 1 << endl;
            cout << i+1 << endl;
            return;
    }

}
    if (v.size() >= 2) {
        cout << 2 << endl;
        cout << 1 << ' ' << 2 << endl;
    } else {
        cout << "-1" << endl;
    }
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

