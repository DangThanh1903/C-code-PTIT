#include <bits/stdc++.h>
using namespace std;

int main()
{
	int test;
	long long a, b;
	cin >> test;
	while (test--)
	{
		cin >> a >> b;
		long long multiply = a * b;
		for (; a != b;)
		{
			if (a > b)
				a -= b;
			else
				b -= a;
		}
		cout << a << " " << multiply / a << endl;
	}
	return 0;
}
