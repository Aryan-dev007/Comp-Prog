#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int n, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    cin >> n;
    while (n--){
        int temp = 0;
        cin >> temp;
        if (temp == 1) {
           s1++;
        }
        else if (temp == 2) {
           s2++;
        }
        else if (temp == 3) {
           s3++;
        }
        else {
           s4++;
        }
    }
    int taxi = 0;
    taxi += s4;
    taxi += s2/2;
    s2 %= 2;
    if (s1 < s3) {
        taxi+=s1;
        s3 -= s1;
        taxi += s3 + s2;
    } else {
        taxi += s3;
        s1 -= s3;
        taxi += s1/4;
        s1%=4;
        if (s1 == 3 && s2 == 1) {
            taxi+=2;
        } else if (s1+s2*2 > 0){
            taxi++;
        }
    }
    cout << taxi << '\n';
    return 0;
}


