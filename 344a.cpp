#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int n,a;
    cin >> n;
    int count = 0;
    int ri;

    while (n--) {
        int temp;
        cin >> temp;
        if (ri != temp) {
           count++;
        }
        ri=temp;

    }
    cout << count << '\n';
    return 0;
}

