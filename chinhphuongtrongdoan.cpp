#include <bits/stdc++.h>
using namespace std;

int main() {
	long long a, b;
	cin >> a >> b;
	for (long long i = (long)sqrt(a); i <= (long)sqrt(b); i++) {
		if (i*i >= a) cout << i*i << " ";
	}
	
	return 0;
}
