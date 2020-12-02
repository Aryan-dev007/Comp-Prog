#include <iostream>
using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;

    cout << n-8-(n&1) << ' ' << 8+(n&1) ;
    return 0;
}

