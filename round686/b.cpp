#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define REP(i, a, b) for (int i=a; i < b; i++)
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

void solve() {
    int n,k;
    cin >> n;
    vi z,v,d;
    unordered_set<int> s;

    while (n--) {
        cin >> k;
        v.pb(k);
        if (s.insert(k).second == false) {
            z.pb(k);
            continue;
    }
}
    d = v;
    sort(d.begin(), d.end());
    d.erase(unique(d.begin(), d.end()), d.end());

    for (auto& i: z) d.erase(remove(d.begin(), d.end(), i), d.end());

     // for (auto i: v) cout << i << ' ';
     // cout << endl;
     // for (auto i: z) cout << i << ' ';
     // cout << endl;
     // for (auto i: d) cout << i << ' ';
     // cout << endl;

    if (d.empty()) {
        cout << -1 << endl;
    }
    else {
        auto it = find(v.begin(), v.end(), d[0]);
        int index = it - v.begin();
        cout << index+1 << endl;
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

