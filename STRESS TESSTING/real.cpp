#include<bits/stdc++.h>
using namespace std;
// #warning TODO: remember about bigger N
int main() {
    int n;
    const int MAX_N = 1e6 + 5;
    int a[MAX_N];
    /* set<int> asd[MAX_N]; */
    /* set<int> asdfasd[3*MAX_N]; */
    cin >>  n;
    for(int i = 1; i <= n; ++i) {
        cin >> a[i];
    }

    sort(a + 1, a+n+1);
    cout << a[2] << endl;
}
