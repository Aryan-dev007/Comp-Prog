#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int n, mx=0, mi=1e9,max_pos=0, min_pos=0, x, i = 0;
    cin >> n;
    while (i < n) {
        cin >> x;
        if (x > mx)  {max_pos = i; mx = x;}
        if (x <= mi) {min_pos = i; mi = x;}
        i++;
    }

    int z = max_pos + (n - min_pos) - 1;
    cout << (max_pos > min_pos ? z-1 : z ) << '\n';
    return 0;
}

