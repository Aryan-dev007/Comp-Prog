#include <bits/stdc++.h>
#define pb push_back

using namespace std;

/* int stringsum(string s) { */

/*     long long int ans = 0; */

/*     for (int i = 0; i != s.length() ; i++) { */
/*         ans += s[i] - '0'; */
/*     } */

/*     return ans; */
/* } */

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int count = 0;
    int odd = 0;

    for (auto i : s) {
        if ((i - '0') % 2 != 0) {
            odd++;
        }
    }

    if (odd <= 1) {
        cout << -1 << endl;
        return;
    }

    for (auto i : s) {
        if ((i - '0') % 2 != 0) {
            cout << i;
            count++;
        }
        if (count == 2) {
            break;
        }
    }
    cout << endl;

    /* for (int i = 0; i < n; i++) { */
    /*     if (s[i] % 2 != 0) { */
    /*         ans += s[i]; */
    /*         count++; */
    /*         flag = true; */
    /*     } */
    /*     if (count == 2 || s.length() == 1) { */
    /*         break; */
    /*     } */
    /* } */

    /* if (s[n - 1] % 2) { */
    /*     s = s.erase(n - 1); */
    /* } */

    /* long long int ans = stringsum(s); */

    /* while(ans % 2) { */

    /* } */

    /* long long int ans = 0; */
    /* bool flag = false; */

    /* for (int i = 0; i != s.length() ; i++) { */
    /*     ans += s[i] - '0'; */

    /*     if (ans % 2==0 && s.length() > 1) { */
    /*         s.erase(s.begin()+i+1, s.end()); */
    /*         if(s[s.length()] % 2) { */
    /*             s = s.erase(s.length()-1); */
    /*             continue; */
    /*         } */
    /*         flag = true; */
    /*         break; */
    /*     } */
    /* } */

    /* if (!flag || stringsum(ans) % 2 != 0) { */
    /*     cout << -1 << endl; */
    /* } else { */
    /*     cout << ans << endl; */
    /* } */
}


int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i)
    {
        solve();
    }

    return 0;
}

