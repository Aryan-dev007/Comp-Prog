#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    bool flag=false;

    while(n--){int k; cin >> k; if (k==1) flag=true;}
    cout << (flag ? "HARD" : "EASY") << '\n';
    return 0;
}
