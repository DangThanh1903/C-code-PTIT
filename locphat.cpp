#include <iostream>
using namespace std;

int main() {
	int test, num, count = 0, ber;
	cin >> test;
	while (test--) {
		cin >> num;
		for ( ;num>1; ) {
			ber = num%10;
			if (ber == 0 || ber == 8 || ber == 6) {
				num=num/10;
				count=1;
			}
			else {
				count=0;
				break;
			}
		}
		if (count==1) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
} 
