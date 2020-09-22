#include <bits/stdc++.h>

using namespace std;

void solve()
{
    long long int a, b;
    cin >> a >> b;

    if (a % b == 0) {
       cout << "0" << endl;
    } else {
        cout << (b * ((a / b) + 1)) - a << endl;
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

