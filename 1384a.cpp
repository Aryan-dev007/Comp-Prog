#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string s(200, 'a');
    int n;
    cin >> n;
    cout << s << endl;

    for (int i = 0; i < n; ++i) {
        int u;
        cin >> u;
        s[u] = s[u] == 'a' ? 'b' : 'a';
        cout << s << endl;
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

