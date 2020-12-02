#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(0);
    int a,b;
    cin >> a >> b;
    cout << min(a,b)  << ' ' << ((max(a,b) - min(a,b)) /2);
    return 0;
}

