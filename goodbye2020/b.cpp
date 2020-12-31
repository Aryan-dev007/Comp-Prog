#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define pb push_back
typedef vector<int> vi;


void solve() {
    int n,cnt=0;
    cin >> n;
    vi v(n);
    vi a;
    unordered_set<int> s1;
    for (auto& i : v) cin >> i, s1.insert(i);
    for (int i=0; i<n ; i++) {
        if (v[i] <= v[i+1]) cnt++;
        else {
            if (cnt > 1) cnt=1;
            a.pb(cnt);
            cnt = 0;
        }
    }
    a.erase(unique(a.begin(), a.end()), a.end());
    cout << s1.size() + accumulate(a.begin(), a.end(), 0) << endl;
}

int main()
{
    int t;
    cin >> t;

    for (int i=0; i<t; ++i)
        solve();

    return 0;
}

