#include<bits/stdc++.h>
using namespace std;


long long arr[1001];
int main(void) {

    cout << fixed << setprecision(9);
	long long n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	sort(arr, arr + n);
	double ans = max(arr[0]-0,m-arr[n-1]);

	for (int i = 0; i < n; i++)
		ans = max(ans, (arr[i + 1] - arr[i])*.5);
	cout << ans << endl;
	return 0;
}
