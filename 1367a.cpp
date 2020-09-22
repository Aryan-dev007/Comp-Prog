#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string b;
    cin >> b;
    string a = b.substr(0, 2);

    for (int i = 3; i < b.size(); i += 2) {
        a += b[i];
    }
    cout << a << endl;
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

