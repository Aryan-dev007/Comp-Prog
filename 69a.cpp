#include <bits/stdc++.h>
#define pb push_back
#define lli long long int
using namespace std;
int n,x,y,z,m,k,l;
int main(){
    for(cin>>n;n--;)cin>>x>>y>>z,m+=x,k+=y,l+=z;
    cout<<(m||k||l?"NO":"YES");
}
