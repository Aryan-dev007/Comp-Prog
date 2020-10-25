#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    cin >> n;

    for (int i = 1; i <= n ; i++) {
        cout << (i%2? "I hate" : "I love") << ' ';
        cout << (i < n ? "that" : "it") << ' ';
    }
    cout << '\n';
    return 0;
}
