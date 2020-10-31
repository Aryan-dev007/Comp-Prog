#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define REP(i, a, b) for (int i=a; i < b; i++)
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

void solve() {
    int n, count=0;
    cin >> n;
    while(n != 0) {
        if (n >= 100) n -= 100;
        else if (n >= 20) n -= 20;
        else if (n >= 10) n -= 10;
        else if (n >= 5)  n -= 5;
        else n -= 1;
        count++;
    }
    cout << count << '\n';
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

