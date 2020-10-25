#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int a,b,c;
    cin >> a >> b >> c;
    std::vector<int> v;
    v.push_back(a+b+c);
    v.push_back((a+b)*c);
    v.push_back(a*(b+c));
    v.push_back(a*b*c);
    int res = *max_element(v.begin(), v.end());
    cout << res << '\n';
    return 0;
}
