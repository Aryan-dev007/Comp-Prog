#include <bits/stdc++.h>
#include <vector>
#define pb push_back
#define lli long long int
#define endl '\n'

using namespace std;

void test(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        if (arr[i] == arr[i+1]) {
           cout << "ERROR" << endl;
        }
    }
}

void solve()
{
    int n;
    cin >> n;
    int arr[101][3];
    int res[101];

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> arr[j][i];
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (arr[i][j] != res[(i+n-1)%n] && arr[i][j] != res[(i+1)%n]) {
                res[i] = arr[i][j];
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        cout << res[i] << ' ' ;
    }

    test(res, n);
    cout << endl;

}



int main()
{
    std::ios_base::sync_with_stdio(false);
    int t=1;
    cin >> t;

    for (int i = 0; i < t; ++i)
    {
        solve();
    }

    return 0;
}

