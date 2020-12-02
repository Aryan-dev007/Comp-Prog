include<stdio.h>

using namespace std;

void solve() {
    long long x,y,a,b;
    cin >> x >> y >> a >> b;
    cout << ((y-x) % (a+b) == 0 ? (y-x)/(a+b):-1) << '\n';
}
