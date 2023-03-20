#include <bits/stdc++.h>
using namespace std;

int main() {
	long long num;
	int cnt = 0;
	cin >> num;
	if (num % 2 == 0) {
		for (; num % 2 == 0;) {
			num /= 2;
			cnt++;
		}
	}
	if (cnt != 0) cout << "2 " << cnt << endl;
	cnt = 0;
	for (long i = 0; num > 1; ) {
		if (num % (i+3) == 0) {
			num /= (i+3);
			cnt++;
		}
		else i+=2;
		if (cnt != 0 && num % (i+3) != 0) {
			cout << i+3 << " " << cnt << endl;
			cnt = 0;
		}
	}
	return 0;
}
