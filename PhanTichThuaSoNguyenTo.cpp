#include <bits/stdc++.h>
using namespace std;

int main() {
	long long num, count = 0;
	long long i = 3;
	cin >> num;
	while (num > 1) {
		while (num % 2 == 0) {
			num /= 2;
			count++;
		} 
		if (count > 0) cout << "2^" << count << " * ";
		count = 0;
		while (num % i == 0) {
			num /= i;
			count++;
		}
		if (count > 0) {
			cout << i << "^" << count;
			if (num > 1) cout << " * ";
		}
		count = 0;
		i+=2;
		if (i > sqrt(num) && count != 0) {
			cout << num;
			break;
		}
	}
	
	
   return 0;
}

