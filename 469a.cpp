#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int n, p, q, temp;
    bool arr[1000];
    cin >> n >> p;
    for (int i = 0; i < p; i++) {
       cin >> temp;
       arr[temp] = true;
    }
    cin >> q;
    for (int i = 0; i < q; i++) {
       cin >> temp;
       arr[temp] = true;
    }
    for (int i = 1; i <= n; i++) {
       if (!arr[i]) {
          cout << "Oh, my keyboard!" << '\n';
          return 0;
       }
    }

    cout << "I become the guy." << '\n';
    return 0;
}
