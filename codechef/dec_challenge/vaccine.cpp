#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    int d1,d2,v1,v2,dd;
    cin >> d1 >> v1 >> d2 >> v2 >> dd;

    if (d1 == d2) {
        int cnt =  dd/(v1 + v2);
        cout  << ((dd % (v1+v2) == 0) ? cnt : cnt+1) << endl;
    }
    else {
            pair<int, int> p1, p2;
            int mul=0;

            p1 = make_pair(d1, v1);
            p2 = make_pair(d2, v2);

            (p1.first > p2.first) ? mul = p2.second : mul = p2.second;

            int mx = max(d1, d2) , mi = min(d1, d2);
            int ans = mx - mi, pre = (mx - mi) * mul;
            ans += (dd-pre)/(v1+v2) + 1;
            cout << ans << endl;
    }
}
