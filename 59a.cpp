#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    string s;
    cin >> s;

    int upper=0;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] >= 'A' && s[i] <='Z') {
            upper++;
        }
    }
    if (upper > s.length()-upper) {
       transform(s.begin(), s.end(), s.begin(), ::toupper) ;
    } else {
       transform(s.begin(), s.end(), s.begin(), ::tolower) ;
    }
    cout << s << '\n';
    return 0;
}
