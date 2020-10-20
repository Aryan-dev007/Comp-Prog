#include<bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[])
{
    int n;
    cin >> n;
    bool flag = false;

    if (n%4==0 || n%7==0 || n%47==0 || n%74==0 || n%477==0 || n%744==0) {
        flag = true;
    }

    cout << (flag? "YES" : "NO") << '\n';
    return 0;
}
