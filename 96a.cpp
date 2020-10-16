#include <bits/stdc++.h>
#define pb push_back
#define lli long long int
using namespace std;


int main()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(0);

    string s;
    cin >> s;

    cout << (s.find("1111111")+1 || s.find("0000000")+1 ? "YES" : "NO") << '\n';

    return 0;
}

