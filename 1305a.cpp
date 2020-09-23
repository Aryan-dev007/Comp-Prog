#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    std::vector<int> v1(n);
    std::vector<int> v2(n);

    for (auto &i : v1) {
        cin >> i;
    }

    for (auto &i : v2) {
        cin >> i;
    }
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());

    for (auto i: v1) {
        cout << i << ' ';
    }
    cout << endl;
    for (auto i : v2) {
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

