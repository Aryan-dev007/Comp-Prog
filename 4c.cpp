#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    unordered_map<string, int>arr;
    string str;
    for (int i = 0; i < t; ++i) {
       cin >> str;
       int r = arr[str]++;
       if (!r) {
          cout << "OK" << '\n';
       } else {
           cout << str << r << '\n';
       }
    }
}
