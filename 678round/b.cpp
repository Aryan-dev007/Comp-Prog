#include <bits/stdc++.h>
#define pb push_back
#define lli long long int
using namespace std;

void solve() {
    int n;
    cin >> n;
    int arr[n][n];

        for (int i = 0; i < n; i += 1) {
            for (int j = 0; j < n; j += 1) {
                if ((i == j ) || (i + j) == (n-1)) {
                   arr[i][j] = 1;
                } else {
                    arr[i][j] = 0;
                }
            }
        }

        if (n%2!=0) {
           arr[(n-1)/2][(n-1)/2 - 1] = 1;
           arr[(n-1)/2 + 1][(n-1)/2] = 1;
        }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << ' ';
        }
    cout << '\n';
    }
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i)
    {
        solve();
    }

    return 0;
}

