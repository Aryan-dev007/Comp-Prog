#include <bits/stdc++.h>
#define pb push_back
#define lli long long int
using namespace std;
template<class A> istream& operator>>(istream& in, vector<A> &a){
    for(auto &i:a)in>>i;
    return in;
}

void solve() {
    int n, m;
    cin >> n >> m;
    std::vector<int> v(n);
    cin >> v;
    lli sum = accumulate(v.begin(), v.end(), 0);
    if (sum == m) {
       cout << "YES" << '\n';
    } else {
        cout << "NO" << '\n';
    }
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i)
    {
        solve();
    }

    return 0;
}

