#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, b) for (int i=a; i < b; i++)

struct drg {
    int strength;
    int add;
};

bool cmp(const drg &a, const drg &b) {
    return a.strength < b.strength;
}

void solve() {
    int s, n;
    cin >> s >> n;
    struct drg d[n];
    REP(i, 0, n)
        cin >> d[i].strength >> d[i].add;

    sort(d, d+n, cmp);
    REP (i, 0, n) {
        if (s <= d[i].strength) {
            cout << "NO" << '\n';
            return;

        } else {
            s += d[i].add;
        }
    }
    cout << "YES" << '\n';
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

