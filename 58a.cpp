#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    regex r ("h.*e.*l.*l.*o");
    if (regex_search(s, r)) {
       cout << "YES" << '\n';
    } else {
        cout << "NO" << '\n';
    }
}
