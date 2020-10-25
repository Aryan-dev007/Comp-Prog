#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int k, l, m, n, d, count=0;
    cin >> k >> l >> m >> n >> d;
    for (int i = 1; i <= d; ++i) {
        if (i%k && i%l && i%m && i%n) {
            // all above parameters have some positive value (i.e. > 0), if there is zero the if exp will be false
            count++;
        }
    }
    cout << d-count << '\n';
    return 0;
}
