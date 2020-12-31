#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    int n, tp=0, ans=0;
    cin >> n;

    while(n--)  {
        int temp;
        cin >> temp;
        if (temp == -1) {
            if (!tp) ans++;
            else tp--;
        }
        else tp+=temp;
    }
    cout << ans << endl;
}
