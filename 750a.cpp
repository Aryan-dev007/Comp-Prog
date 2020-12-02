#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
    int a,b,k=0;
    cin >> a >> b;
    while(b<=240) k++, b+=5*k;
    cout << min(k-1, a);
}

