#include<bits/stdc++.h>
using namespace std;

int main(void)
{
   string s;
   cin >> s;
   bool flag = false;
   for (int i = 0; i < s.length(); ++i) {
      if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9') {
         flag = true;
      }
   }
   cout << (flag ? "YES" : "NO") << '\n';
    return 0;
}
