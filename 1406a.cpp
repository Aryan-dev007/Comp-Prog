#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    int cnt[102] = {}, sum = 0, prev=2;
    int a;

    for (int i = 0; i < n; ++i) {
        cin >> a;
        cnt[a]++;
    }
    for (int i = 0; i < 102; ++i) {
            if (cnt[i] == 0 && prev == 2) {
                sum = 2 * i;
                break;
            } else if (cnt[i] == 1 && prev==2){
                sum += i;
                prev = 1;
            } else if (cnt[i] == 0 && prev==1) {
                sum += i;
                break;
            }
    }
    cout << sum << endl;
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

