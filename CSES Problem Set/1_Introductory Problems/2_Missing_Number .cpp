// https://cses.fi/problemset/task/1083/

#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define fr first
#define sc second
#define MOD 1000000007
#define len(x) x.size()
#define min3(a, b, c) min(a, min(b, c))
#define max3(a, b, c) max(a, max(b, c))
#define all(v) v.begin(), v.end()
#define alla(a,n) a, a + n

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
typedef vector<pll> vpll;
typedef vector<vll> vvll;
typedef vector<string> vs;

int32_t main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin) ;
	freopen("output.txt", "w", stdout) ;
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL) ; cout.tie(NULL) ;


	int n;
	cin >> n;

	int arr[n - 1];
	int brr[n];
	int sum1 = 0;
	int sum2 = 0;

	for (int i = 0; i < n - 1; i++)
	{
		cin >> arr[i];
		sum1 += arr[i];
	}
	for (int i = 0; i < n; i++)
	{
		brr[i] = i + 1;
		sum2 += brr[i];
	}
	cout << sum2 - sum1;

	return 0 ;
}