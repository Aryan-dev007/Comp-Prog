#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    string x,y,res="";
    cin >> x >> y;

    for (int i = 0; i < x.length(); ++i) {
       if (x[i] != y[i]) {
            res += '1';
       } else {
           res += '0';
       }
    }
    cout << res << '\n';
    return 0;
}
