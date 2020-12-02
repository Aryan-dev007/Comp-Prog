#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define REP(i, a, b) for (int i=a; i < b; i++)
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

void solve() {
    int n,x;
    cin >> n;
    vi a(n+1), b(n+1);
    for (int i=0; i<n; i++) {
        int x;
        cin >> x;
        ++a[x];
        b[x] = i+1;
    }

    int ans = -1;
    for (int i=0; i<=n; i++) {
        if (a[i] == 1) {
            ans = b[i];
            break;
        }
    }
    cout << ans << endl;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;

    REP(i, 0, t)
        solve();

    return 0;
}

