#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    int arr[n][2];
    int temp, count=0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < 2; ++j) {
           cin >> temp;
           arr[i][j] = temp;
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
           if (arr[i][1] == arr[j][0]) {
              count++;
           }
        }
    }
    cout << count << '\n';
    return 0;
}
