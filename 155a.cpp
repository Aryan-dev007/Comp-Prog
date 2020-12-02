#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,x,count=0;
    cin >> n >> x;
    int mx = x, mn = x;
    n--;
    while(n--) {
        cin >> x;
        if (x > mx) {
            mx = x;
            count++;
        }

        if (x < mn) {
            mn = x;
            count++;
        }

    }
    cout << count;

}
