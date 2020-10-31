#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define REP(i, a, b) for (int i=a; i < b; i++)
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

void solve() {
    int n, m;
    cin >> n >> m;
    bool flag = true;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (i % 2 != 0 && flag) {
               cout << '.';
            } else if (i % 2 != 0 && !flag) {
               cout << '#';
               flag = true;
            } else {
                cout << '#';
                flag = false;
            }

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

