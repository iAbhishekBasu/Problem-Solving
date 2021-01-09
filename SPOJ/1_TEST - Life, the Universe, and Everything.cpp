// https://www.spoj.com/problems/TEST/

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	while (true)
	{
		cin >> t;
		if (t == 42)
			break;
		else
			cout << t << endl;
	}
	return 0;
}
 
 