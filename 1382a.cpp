#include <bits/stdc++.h>
#define pb push_back
#define lli long long int

using namespace std;

int element(vector<int> a, vector<int> b) {

    std::vector<int>::iterator it;
    for (int i = 0; i < a.size(); ++i) {
        it = find(b.begin(), b.end(), a[i]);
        if (it-b.begin() < b.size()) {
            return a[i];
        }
    }

    return -1;

}
void slow_solve()
{
    int n, m;
    cin >> n >> m;
    std::vector<int> a(n);
    std::vector<int> b(m);

    for (auto &i : a) {
        cin >> i;
    }

    for (auto &i : b) {
        cin >> i;
    }

    int res = element(a, b);

    if (res == -1) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
        cout << 1 <<' '<< res << endl;
    }
}

void fast_solve() {
    int n, m;
    cin >> n >> m;

    std::vector<bool> v(1010);
    while(n--) {
        int x = 0;
        cin >> x;
        v[x] = true;
    }
    int a = -1;
    while(m--) {
        int x = 0;
        cin >> x;

        if (v[x]) {
            a = x;
        }
    }

    if (a == -1) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl << 1 << ' ' << a << endl;
    }
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i)
    {
        fast_solve();
    }

    return 0;
}

