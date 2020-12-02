#include <bits/stdc++.h>

using namespace std;

void naive_solve()
{
    int s;
    cin >> s;
    vector<int> v;

    for (int i = 0; i < s; i++) {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    sort(v.begin(), v.end());

    vector<int> p;
    for (int i = 0; i < v.size(); i++) {
        for (int j = i+1; j < v.size(); j++) {
            p.push_back(min(abs(v[i] - v[j]), abs(v[j]-v[i])));
        }
    }
    sort(p.begin(), p.end());
    cout << p[0] << endl;

}


void fast_solve() {
    int n;
    cin >> n;

    std::vector<int> v(n);
    for (auto &i : v) {
        cin >> i;
    }

    sort(v.begin(), v.end());

    int res = v[n-1] - v[0];
    for (int i = 0; i < n; i++) {
       for (int j = i + 1; j < n; j++) {
          res = min(res , v[j] - v[i]);
       }
    }
    cout << res << endl;
}

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        fast_solve();
    }
    return 0;
}
