#include <bits/stdc++.h>
using namespace std;

int main() {
	long long a = 0, b = 0, a1 = 0, b1 = 0;
	cin >> a >> b;
	if (sqrt(a) <= (long)sqrt(a)) a1 = (long)sqrt(a);
	else a1 = (long)sqrt(a) + 1;
	b1 = (long)sqrt(b);
	cout << b1 - a1 + 1;
	return 0;
}
