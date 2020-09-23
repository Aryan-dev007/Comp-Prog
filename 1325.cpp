#include <bits/stdc++.h>

using namespace std;

void naive_solve()
{
    int n;
    cin >> n;
    std::vector<int> v(n);

    for (auto &i : v) {
        cin >> i;
    }
    sort(v.begin(), v.end());
    v.erase(unique( v.begin(), v.end() ), v.end());

    cout << v.size() << endl;
}

void fast_solve() {
    int n;
    cin >> n;
    std::set<int> s;

    for (int i = 0; i < n; i++) {
        int r;
        cin >> r;
        s.insert(r);
    }
    cout << s.size() << endl;
}

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i)
    {
        fast_solve();
    }

    return 0;
}

