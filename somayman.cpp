#include <bits/stdc++.h>
using namespace std;

int main() {
	int test;
	long long num;
	cin >> test;
	while (test--) {
		cin >> num;
		if (num % 100 == 86) cout << "1" << endl;
		else cout << "0" << endl;
	}
	
	return 0;
}
