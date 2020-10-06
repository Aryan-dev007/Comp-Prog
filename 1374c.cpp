#include <bits/stdc++.h>
#define pb push_back
#define lli long long int

using namespace std;

void solve()
{
   int n;
  cin >> n;
  string s;
  cin >> s;

  int a = 0;
  int b = 0;
  for (auto i : s) {
      if (i == '(') {
         a++;
      } else {
          a--;
          if (a < 0) {
              a = 0;
              b++;
          }
      }
  }
  cout << b << endl;


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

