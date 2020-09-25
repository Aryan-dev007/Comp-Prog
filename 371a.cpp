#include "bits/stdc++.h"

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    std::vector<int> v(n);
    long ans = 0;

    for (auto &i : v) {
        cin >> i;
    }

    for (int i = 0; i < k; ++i) {
        long r = 0;

        for (int j = 0; j < n/k; ++j) {
            r += v[i+j*k] == 1;
        }
        ans += min(r, n/k - r);
    }

    cout << ans << endl;

}

/* int main() { */
/*     int n, k; */
/*     cin >> n >> k; */
/*     std::vector<int> v(n); */
/*     int ans = 0; */

/*     for (auto &i : v) { */
/*        cin >> i; */
/*     } */

/*     for (int i = 0; i < k; i++) { */
/*         int c = count(v.begin()+i , v.begin()+k , 1); */
/*         ans += min(c, n/k-c); */
/*     } */
/*     cout << ans << endl; */
/* } */
