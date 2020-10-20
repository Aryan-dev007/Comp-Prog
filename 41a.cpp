#include<bits/stdc++.h>
using namespace std;

int main(void)
{

    string bi, be;
    cin >> be >> bi;
    reverse(be.begin(), be.end());
    cout << (be == bi ? "YES" : "NO") << '\n';
    return 0;
}
