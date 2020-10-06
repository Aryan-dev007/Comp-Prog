#include <bits/stdc++.h>
#define pb push_back
#define lli long long int

using namespace std;

/* void stress_test(vector<int> a,  vector<int> b) { */

/*     std::vector<int> v1; */
/*     std::vector<int> v2; */

/*     for (int i = 0; i < a.size() - 1; i++) { */
/*         v1.pb(a[i] + a[i+1]); */
/*         v2.pb(b[i] + b[i+1]); */
/*     } */

/*     sort(v1.begin(), v1.end()); */
/*     sort(v2.begin(), v2.end()); */

/*     cout << "V1" << "-->"  << ' '; */
/*     for (auto i : v1) { */
/*         cout << i << ' '; */
/*     } */
/*     cout << endl; */

/*     cout << "V2" << "-->" << ' ' ; */
/*     for (auto i : v2) { */
/*         cout << i << ' '; */
/*     } */
/*     cout << endl; */

/*     if(v1 == v2) { */
/*         cout << "OK" << endl; */
/*     } else { */
/*         cout << "ERROR" << endl; */
/*         exit(0); */
/*     } */

/* } */

void solve()
{
    int n;
    cin >> n;
    /* n = rand() % 100; */
    vector<int> v(n);

    /* cout << "ORGINAL VECTOR" << "-->" << ' '; */
    for (auto &i : v) {
        cin >> i;
        /* i = rand() % 10; */
        /* cout << i << ' '; */
    }

    //fisher yattes

    /* for (int i = 0; i < n; ++i) { */
    /*     unsigned j = rand() % (i + 1); */
    /*     if (j < i) { */
    /*         v.pb(v[j]); */
    /*         v[j] = i; */
    /*     } else { */
    /*         v.pb(i); */
    /*     } */
    /* } */

    /* for (auto i : v) { */
    /*     cout << i <<' '; */
    /* } */
    /* cout << endl; */

    /* if (n % 2 == 0) { */
    /* for (int i = n; i > -1; i-=2) { */
    /*     swap(v[i], v[i+1]); */
    /* } */
    /* } else { */
    /*     int b = max_element(v.begin(), v.end()) - v.begin(); */
    /*     int a = *max_element(v.begin(), v.end()); */
    /*     v.erase(v.begin()+b); */

    /* for (int i = v.size(); i > -1; i-=2) { */
    /*     swap(v[i], v[i+1]); */
    /* } */
    /* v.insert(v.begin() + v.size()/2, a); */
    /* } */

    reverse(v.begin(), v.end());


    /* std::vector<int> a; */
    /* cout << "OUTPUT_VECTOR" << "-->" << ' '; */
    for (auto i : v) {
        cout << i << ' ';
        /* a.pb(i); */
    }
    cout << endl;

    /* cout << "STRESS test" << endl; */
    /* stress_test(a, v); */

}

int main()
{
    std::ios_base::sync_with_stdio(false);
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i)
    {
        solve();
    }

    return 0;
}

