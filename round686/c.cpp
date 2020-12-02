#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define REP(i, a, b) for (int i=a; i < b; i++)
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

void solve() {
    int n,c,m=1e9;
    cin >> n;
    vi v(n);
    unordered_set<int> s;
    for (auto& i: v) cin >> i, s.insert(i);

    if (s.size() == 1) {cout << 0 << endl; return;}
    if (s.size() == v.size()) {cout << 1 << endl; return;}

    for (auto i: s) {
        c = count(v.begin(), v.end(), i);
        m = min(c, m);
    }
    cout << m << endl;

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

