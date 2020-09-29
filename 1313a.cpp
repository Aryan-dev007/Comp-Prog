#include <bits/stdc++.h>
#define pb push_back

using namespace std;

void solve()
{
    std::vector<int> v(3);
    int res = 0;

    for (auto &i : v) {
        cin >> i;
    }
    sort(v.begin(), v.end());

for(int i=0; i<3; ++i){
    if(v[i]){
      ++res;
      v[i]--;
    }
  }
  if(v[2] && v[1]){
    v[2]--, v[1]--;
    ++res;
  }
  if(v[2] && v[0]){
    v[2]--, v[0]--;
    ++res;
  }
  if(v[1] && v[0]){
    v[1]--, v[0]--;
    ++res;
  }
  if(v[2] && v[1] && v[0]){
    ++res;
  }
  cout << res << endl;
}

    /* if (v[1] == v[2] && v[0] == v[1] && v[0] != 0) { */
    /*     cout << (2 * v[0]) + (v[2] - v[1]) - 1  << endl; */
    /* } else { */
    /* cout << (2 * v[0]) + (v[2] - v[1]) << endl; */
    /* } */

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

