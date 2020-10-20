#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    int p,q, acc=0;
    for (int i = 0; i < n; ++i) {
        cin >> p >> q;
        if (abs(p-q) >= 2) {
            acc++;
        }
    }
    cout << acc << '\n';
    return 0;
}
