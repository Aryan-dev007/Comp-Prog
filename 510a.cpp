#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, b) for (int i=a; i < b; i++)

void solve() {
    int n, m;
    cin >> n >> m;
    char arr[n][m];
    REP(i, 0, n){
        REP(j, 0, m) {
            if (i % 2 == 0)  arr[i][j] = '#';
            else arr[i][j] = '.';
        }
    }

    bool flag = true;
    for (int i = 1; i < n; i += 2) {
       if (!flag) {
           arr[i][0] = '#';
           flag = true;
       } else {
           arr[i][m-1] = '#';
           flag = false;
       }
    }



    REP(i, 0, n) {
        REP(j, 0, m) {
            cout << arr[i][j];
        }
        cout << '\n';
    }

}

int main()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t=1;

    REP(i, 0, t)
        solve();

    return 0;
}

