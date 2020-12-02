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

    while (n != 1) {

        if (n % 2 == 0) {
            int t = n/2;
            n /= t;
            if (t == 1) {
                count++;
                break;
            }
        }
        else
            n--;

        count++;
    }
    cout << count << '\n';
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

