#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    string s1, s2, mix;
    cin >> s1 >> s2 >> mix;
    s1 += s2;
    sort(s1.begin(), s1.end());
    sort(mix.begin(), mix.end());
    cout << (s1 == mix ? "YES" : "NO") << '\n';
    return 0;
}
