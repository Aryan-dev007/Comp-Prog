#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int n, m, ans;
    cin >> n >> m;
    ans = min(n, m);
    cout << (ans % 2 == 0 ? "Malvika" : "Akshat") << '\n';
    return 0;
}
