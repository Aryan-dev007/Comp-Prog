#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int n,temp;
    cin >> n;
    int m = n;
    double res = 0;

    while(n--) {
        cin >> temp;
        res += temp;
    }
    res /= m;
    printf("%0.8f", res);
    return 0;
}
