#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    int n, k, count=0;
    cin >> n >> k;
    while(k<=240)count++,k+=5*count;
    cout << min(count-1, n);
    return 0;
}
