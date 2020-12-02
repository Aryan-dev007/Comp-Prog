#include<iostream>
#include<string>
#define end '\n'

using namespace std;

void solve() {
    string s;
    cin >> s;
    int a=0,b=0,res=0;

    for(int i=0; i < s.length(); i++) {
        if (s[i] == '(')
            a++;

        else if (s[i] == ')'){
            if (a > 0) {
                res++;
                a--;
            }
        }

        else if (s[i] == '[')
            b++;

        else {
            if (b > 0) {
                res++;
                b--;
            }
        }

    }
    cout << res << end;
}

int main() {
    int t;
    cin >> t;
    for (int i=0; i<t; i++) solve();
}
