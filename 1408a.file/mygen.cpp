#include <bits/stdc++.h>
#define pb push_back
#define lli long long int
#define endl '\n'

using namespace std;

int rand(int a, int b) {
    return a + rand() % (b - a + 1);
}

int main(int argc, char* argv[])
{
    srand(atoi(argv[1]));
    cout << 1 << endl;
    int n = rand(3, 10);
    cout << n << endl;

    for (int i = 0; i < 3; ++i) {
        for (int i = 0; i < n; ++i) {
            cout << rand(1, 10) << ' ';
        }
        cout << endl;
    }
}

