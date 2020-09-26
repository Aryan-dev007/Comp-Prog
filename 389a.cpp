#include <algorithm>
#include<bits/stdc++.h>

using namespace std;

int gcd(int a, int b);

int main() {
    int n;
    cin >> n;
    std::vector<int> v(n);
    std::vector<int> k;

    for (auto &i : v) {
        cin >> i;
    }

    int ans = v[0];
    for (int i = 0; i < n; i++) {
        ans = gcd(ans, v[i]);
    }
    cout << ans * n << endl;
}

int gcd(int a, int b) {
    if (a == 0) {
        return b;
    } else {
        return gcd(b % a, a);
    }
}
