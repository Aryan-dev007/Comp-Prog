#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int a, b;
   cin >> a >> b;

   if (a==b) {
       cout << 0 << endl;
   }
   else if (a > b && (a-b) % 2 == 0 || a < b && (b-a) % 2 == 1) {
       cout << 1 << endl;
   } else {
       cout << 2 << endl;
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

