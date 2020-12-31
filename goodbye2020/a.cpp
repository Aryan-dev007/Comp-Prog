#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve() {
    int n;
    cin >> n;
    vector<float> v(n);
    for(auto& i : v) cin >> i;
    unordered_set<float> v1;
    for(int i=n-1; i>0; i--) {
        for (int j=0; j<i; j++)  {
            v1.insert((v[i] - v[j] )/ 2);
        }
    }
    cout << v1.size() << endl;
}

int main()
{
    int t;
    cin >> t;

    for (int i=0; i<t; ++i)
        solve();

    return 0;
}

