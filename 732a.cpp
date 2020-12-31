#include<bits/stdc++.h>
using namespace std;
#define endl '\n'


int main() {
    int k, r, i;
    cin >> k >> r;
    for (i=1; i<=10; ++i) {
        int rep = k*i;
        if (rep%10 == r || rep%10==0) {
            break;
        }
    }
    cout << i << endl;
}
