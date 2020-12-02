#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define REP(i, a, b) for (int i=a; i < b; i++)
#define endl '\n'
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

void solve() {
    int n, q;
    string s;
    cin >> n >> q >> s;
    bool flag = false;

    while (q--) {
        int l, r, count=0;
        string p;
        cin >> l >> r;
        for (int i=l-1; i<r; i++) p += s[i];

    }
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

