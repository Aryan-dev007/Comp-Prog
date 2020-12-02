#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(0);
    vector<int> v(4);

    for (auto& i : v) cin >> i;
    sort(v.begin(), v.end());
    cout << v[3] - v[0] << ' ' << v[3] - v[1] << ' ' <<  v[3] - v[2];
    return 0;
}

