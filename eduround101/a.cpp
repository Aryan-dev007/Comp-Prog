#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void solve() {
    string s;
    cin >> s;

    if (s.length() % 2) {cout << "NO" << endl; return;}
    if (s.front() == ')' || s.back()=='(') {cout << "NO" << endl; return;}
    cout << "YES" << endl;
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

