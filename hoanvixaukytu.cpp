#include <bits/stdc++.h>
using namespace std;

long n, a[100], ok, used[100];
string x;

void inkq()
{
	for (int z = 1; z <= x.size(); z++)
	{
		cout << x[a[z] - 1];
	}
	cout << " ";
}

void quaylui(int i)
{
	for (int j = 1; j <= x.size(); j++)
	{
		if (used[j] == 0)
		{
			a[i] = j;
			used[j] = 1;
			if (i == x.size())
				inkq();
			else
			{
				quaylui(i + 1);
			}
			used[j] = 0;
		}
	}
}

int main()
{
	int test;
	cin >> test;
	while (test--)
	{
		cin >> x;
		for (int z = 1; z <= x.size(); z++)
		{
			used[z] = 0;
		}
		quaylui(1);
		cout << endl;
	}
	return 0;
}
