#include <bits/stdc++.h>
using namespace std;

int main()
{
	long n, x;
	cin >> n;
	vector<long> c, l;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		if (x % 2 == 0)
			c.push_back(x);
		else
			l.push_back(x);
	}
	sort(c.begin(), c.end());
	sort(l.begin(), l.end());
	for (int z = 0; z < l.size() + c.size(); z++)
	{
		if (z % 2 == 0)
			cout << l[z / 2] << " ";
		else
			cout << c[c.size() - ((z + 1) / 2)] << " ";
	}

	return 0;
}
