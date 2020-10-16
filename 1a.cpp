#include <bits/stdc++.h>
#define pb push_back
#define lli long long int
#define endl '\n'

using namespace std;


int main()
{
    lli n, m, a;
    cin >> n >> m >> a;

    lli res = (n+a-1ll)/a*((m+a-1)/a);
    cout <<res<< endl;
}

