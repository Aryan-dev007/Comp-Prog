#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    std::vector<int> v(n);
    for (auto &i : v) {
        cin >> i;
    }
    sort(v.begin(), v.end());

    for (auto i : v) {
        cout << i << ' ';
    }
    cout << '\n';

    return 0;
}
