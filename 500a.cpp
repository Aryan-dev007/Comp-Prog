#include<bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    int n, t,cnt=0;
    cin >> n >> t;
    t--;
    vector<int> v(n-1);
    for (auto& i: v) cin >> i;
    while(cnt<t) cnt += v[cnt];
    cout << (cnt==t? "YES" : "NO");
}


