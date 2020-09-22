#include <bits/stdc++.h>
#include <vector>

using namespace std;

void solve()
{
    long long int a, b, c, d;
    cin >> a >> b >> c >> d;

    vector<int> v;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    v.push_back(d);

    bool flag = true;
    int pos = 0;
    for (int i = 1; i < v.size(); ++i) {
        for (int j = i+1; j < v.size() - 1; ++j) {
            if (v[i] == v[j]) {
                flag = false;
                pos = v[j];
            }
        }
    }

        std::cout << b <<' '<< c <<' '<< c <<' '<< std::endl;
}

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i)
    {
        solve();
    }

    return 0;
}

