#include <bits/stdc++.h>
#define pb push_back
#define lli long long int

using namespace std;

void solve()
{
    int n;
    cin >> n;

    int count = 0;
    while (n != 1) {
        if (n % 2 == 0 && n % 3 == 0) {
            n /= 6;
        } else {
            n *= 2;
        }
        count++;

        if (n < 0) {
            count = -1;
            break;
        }
    }
    cout << count << endl;
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

