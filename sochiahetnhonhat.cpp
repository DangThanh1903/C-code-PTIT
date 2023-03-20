#include <bits/stdc++.h>

using namespace std;

int main() {
	int test;
	unsigned long long tmp;
	long double num, cnt;
	cin >> test;
	while(test--) {
		tmp = 1;
		cin >> num;
		for (double i = 2; i <= sqrt(num); i++) {
			cnt = log(num) / log(i) + 0.0000000001;
			int cnt1 = cnt;
			if (tmp % (long)i != 0) tmp *= pow(i, cnt1);
		}
		if (num <= 3) {
			for (int j = 2; j <= num; j ++) {
				tmp *= j;
			}
		}
		else {
			for (int j = 3; j <= num; j += 2) {
				if (tmp % j != 0) {
					tmp *= j;
				}
			}
		}
		cout << tmp << endl;
	}
	return 0;
}
