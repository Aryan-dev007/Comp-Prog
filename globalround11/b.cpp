#include <bits/stdc++.h>
#define pb push_back
#define lli long long int
#define endl '\n'

using namespace std;

void solve()
{
    lli n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    lli ws =  count(s.begin(), s.end(), 'W');
    /* /1* cout << "WS" << " " << ws << endl; *1/ */
    lli ls =  n - ws;
    /* cout << "LS" <<" " << ls << endl; */

    cout << ws + 2*k << endl;


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

