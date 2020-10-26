#include <bits/stdc++.h>
#define pb push_back
#define lli long long int
using namespace std;

template<class A> istream& operator>>(istream& in, vector<A> &a){
    for(auto &i:a)in>>i;
    return in;
}


void solve() {
    int n;
    cin >> n;
    std::vector<int> v(n);
    cin >> v;
    reverse(v.begin(), v.end());

    for (int i = 0; i < n/2; ++i) {
       cout << -v[i] << ' ';
    }
    for (int i = n/2; i < n; ++i) {
       cout << v[i] << ' ';
    }
    cout  << '\n';
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
