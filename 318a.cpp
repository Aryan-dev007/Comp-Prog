#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    long long int n,k;
    cin >> n >> k;
    n++;
    n=k-n/2;
    cout << (n>0?2*n:2*k-1) << '\n';
    return 0;
}
