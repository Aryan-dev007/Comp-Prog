#include <bits/stdc++.h>
#define lli long long int
using namespace std;

int main() {
    lli n, k;
    cin >> n >> k;

    int count = 0;

    while (n <= k) {
        n *= 3;
        k *= 2;
        count += 1;
    }

    cout << count << '\n';
}
