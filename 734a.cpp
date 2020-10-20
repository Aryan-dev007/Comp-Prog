#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    string s;
    cin >> n >> s;
    int a;
    a = count(s.begin(), s.end(), 'A');
    if (a == n - a) {
       cout << "Friendship" << '\n';
    }
    else if (a > n - a) {
        cout << "Anton" << '\n';
    } else {
        cout << "Danik" << '\n';
    }
    return 0;
}
