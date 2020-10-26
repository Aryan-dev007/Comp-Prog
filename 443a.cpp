#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    set<char> s;
    char c;
    while (cin >> c) {
        if (c >= 'a' && c <= 'z') {
           s.insert(c);
        }
    }
    cout << s.size() << '\n';
    return 0;
}
