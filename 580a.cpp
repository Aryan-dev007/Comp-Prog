#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int n, first;
    cin >> n >> first;
    int count=1, fc=0;
    n--;
    while(n--) {
        int next;
        cin >> next;
        if (next >= first) {
           count++;
        } else {
            fc = max(count,fc);
            count = 1;
        }
        first = next;
    }
    cout << max(fc, count) << '\n';
    return 0;
}
