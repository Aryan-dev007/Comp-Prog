#include<bits/stdc++.h>
using namespace std;


int main(void)
{
    set<int> s;
    int temp;
    while(cin >> temp) {
        s.insert(temp);
    }
    cout << 4-s.size() << '\n';
    return 0;
}
