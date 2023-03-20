#include <bits/stdc++.h>
using namespace std;

long long usnt(long long x) {
	for (long long i = 3; i <= x; i+=2) {
		if (x % i == 0) return i;
		if (i > sqrt(x)) return x;
	}
	return 1; 
}

int main() {
	long long num;
	cin >> num;
	for (long long z = 1; z <= num; z++) {
		if (z % 2 == 0) cout << "2" << endl;
		else cout << usnt(z) << endl;
	}
   return 0;
}

