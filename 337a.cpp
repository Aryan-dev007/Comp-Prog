#include <bits/stdc++.h>
#define pb push_back
#define lli long long int
using namespace std;

template<class A> istream& operator>>(istream& in, vector<A> &a){
    for(auto &i:a)in>>i;
    return in;
}

int main(void)
{
    int n,m,ans=1e9;
    cin >> n >> m;
    std::vector<int> v(m);
    cin >> v;
    sort(v.begin(), v.end());
    for (int i = 0; i < m-n+1; ++i) {
       ans = min(ans, v[i+n-1]-v[i]);
    }
    cout << ans << '\n';

    return 0;
}
