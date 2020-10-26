#include<bits/stdc++.h>
using namespace std;

template<class A> istream& operator>>(istream& in, vector<A> &a){
    for(auto &i:a)in>>i;
    return in;
}


int main(void)
{
    int n, in=0;
    cin >> n;
    std::vector<int> v(n);
    cin >> v;
    for (auto i : v) {
       if(i % 2)  in++;
    }

    if (in == 1) {
       for (int i = 0; i < n; ++i) {
          if (v[i] % 2) {
            cout << i+1 << '\n';
            return 0;
          }
       }
    } else {
        for (int i = 0; i < n; ++i) {
           if (v[i] % 2 == 0) {
              cout << i + 1 << '\n';
              return 0;
           }
        }
    }

    return 0;
}
