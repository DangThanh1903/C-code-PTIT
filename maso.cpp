#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int test, count = 0;
	long long num, ans = 0;
	cin >> test;
	while (test--) {
		cin >> num;
		for ( ; num > 0; ) {
			if (num % 1000 == 84 && num > 999) num /= 1000;
			else {
				if (num%10 != 0) ans = ans + (num%10)*pow(10, count);
				num /= 10;
				count++;
			}
		}
		cout << ans << endl;
		count = ans = 0;
	}
	
	return 0;
}
