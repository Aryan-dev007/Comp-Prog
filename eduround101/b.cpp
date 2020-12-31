#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define pb push_back
typedef vector<int> vi;
void solve() {
    int n,m;
    cin >> n;
    vi a(n);
    vi a1;
    for (auto& i : a) {
        cin >> i;
    }
    cin >> m;
    vi b(m);
    vi b1;
    for (auto& i : b) {
        cin >> i;
    }
    a1.pb(0);
    b1.pb(0);
    a1.pb(a[0]);
    b1.pb(b[0]);
    int suma=a[0];
    for (int i=1; i<n; i++) {
        suma += a[i];
        a1.pb(suma);
    }
    int sumb=b[0];
    for (int i=1; i<m; i++) {
        sumb += b[i];
        b1.pb(sumb);
    }
    cout << *max_element(a1.begin(), a1.end()) + *max_element(b1.begin(), b1.end()) << endl;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;

    for (int i=0; i<t; ++i)
        solve();

    return 0;
}

