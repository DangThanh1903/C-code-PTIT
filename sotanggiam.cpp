#include <bits/stdc++.h>
using namespace std;

bool snt(long long a) { 
	int count = 0;
	if (a < 11) return false;
	else {
		for (int i=0; i+2 <= sqrt(a); i++) {
			if (a % (i+2) == 0) return false;
			else count++; 
		}
		if (count != 0) return true;
	}
}

bool tang(long long b) {
	int temp, test, test1;
	if (b > 99) {
		for ( ; b > 9;) {
		temp = b % 10;
		if (((b/10)%10) <= temp) return false;
		b/=10;
		}
	}
	else return true;
}


bool giam(long long b) {
	int temp, test, test1;
	if (b > 99) {
		for ( ; b > 9;) {
		temp = b % 10;
		if (((b/10)%10) >= temp) return false;
		b /= 10;
		}
	}
	else return true;
}


int main() {
	int test, num, count = 0, count1 = 0;
	cin >> test;
	while (test--) {
		cin >> num;
		for (long long i = pow(10, num-1); i < pow(10, num); i++) {
			if (tang(i) || giam (i)) {
				if (snt(i)) {
					count++;
				}
			}
		}
		cout << count <<endl;
		count = 0;
	}
	return 0;
}
