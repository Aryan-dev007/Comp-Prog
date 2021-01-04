#include <bits/stdc++.h> using namespace std;
#define endl '\n'
#define pb push_back
typedef vector<int> vi;


void solve() {
    int n;
    cin >> n;
    unordered_set<int> S;
    for (int i=1; i<=n ; ++i) {
        int v;
        cin >> v;
        if (S.count(v)) v++;
        S.insert(v);
    }
    printf("%d\n", (int) S.size());
}

int main()
{
    int t;
    cin >> t;

    for (int i=0; i<t; ++i)
        solve();

    return 0;
}

