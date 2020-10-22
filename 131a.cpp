#include<bits/stdc++.h>
using namespace std;

bool is_all_upper(const std::string &s) {
    return all_of(s.begin()+1, s.end(), [](unsigned char c) { return isupper(c); });
}

bool is_all_upper1(const std::string &s) {
    return all_of(s.begin(), s.end(), [](unsigned char c) { return isupper(c); });
}

int main(void)
{
    string s;
    cin >> s;
    if (!isupper(s[0]) && is_all_upper(s)) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        s[0] -= 32;
        cout << s << '\n';
        return 0;
    }
    if (is_all_upper1(s)) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }
        cout << s << '\n';

    return 0;
}
