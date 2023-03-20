#include <bits/stdc++.h>

using namespace std;

int main() {
	int test, temp, count;
	long long num;
	cin >> test;
	while (test--) {
		cin >> num;
		for ( ; num > 9; ) {
			temp = num%10;
			num /= 10;
			if ((temp - (num%10)) == 1 || (temp - (num%10)) == -1 ) count = 0;
			else {
				count = 1;
				break;
			}
		}
		if (count == 0) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	
	
	
	return 0;
}
