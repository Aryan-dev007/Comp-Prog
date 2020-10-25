#include<bits/stdc++.h>
using namespace std;

void erasesubstring(string& mainstr, const string& toreplace) {
    size_t pos = string::npos;
    while((pos = mainstr.find(toreplace)) != string::npos) {
        /* mainstr.erase(pos, toreplace.length()); */
        mainstr.replace(pos, toreplace.length(), " ");
    }
}

int main(void)
{
    string s;
    cin >> s;
    erasesubstring(s, "WUB");
    cout << s << '\n';
    return 0;
}
