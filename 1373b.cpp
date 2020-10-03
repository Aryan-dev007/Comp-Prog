#include <bits/stdc++.h>
#define pb push_back
#define lli long long int

using namespace std;

void solve()
{
    string s;
    cin >> s;

    size_t one = count(s.begin(), s.end(), '1');
    size_t zero = count(s.begin(), s.end(), '0');

    if (min(one, zero) % 2 != 0) {
        cout << "DA" << endl;
    } else {
        cout << "NET" << endl;
    }
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

