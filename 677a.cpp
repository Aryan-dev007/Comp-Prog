#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int n, k;
    cin >> n >> k;

    std::vector<int> v(n);
    for (auto &i : v) {
        cin >> i;
    }
    int count = n;
    for (int i = 0; i < n; ++i) {
        if (v[i] > k) {
            count++;
        }
    }
    cout << count << '\n';
    return 0;
}
