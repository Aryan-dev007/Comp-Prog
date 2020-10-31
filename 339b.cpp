#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define REP(i, a, b) for (int i=a; i < b; i++)
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

template<class A> istream& operator>>(istream& in, vector<A> &a){
    for(auto &i:a)in>>i;
    return in;
}

void solve() {
    int n,m,x,pos=1;
    ll sum=0;
    cin >> n >> m;
    while (cin >> x) {
        sum += (x-pos+n)%n;
        /* x-pos is for position */
        /* +n) % n is for managing negative position */
        /* doesnot affect odd positions, since you add n to it. */
        pos = x;
    }
    cout << sum << '\n';
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

