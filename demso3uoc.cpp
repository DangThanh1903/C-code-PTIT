#include <bits/stdc++.h>
using namespace std;

int main() {
	int test;
	long long n;
	int count = 1, count1 = 0;
	cin >> test;
	while (test--) {
		cin >> n;
		if (n >= 4) {
			for (int i = 3; i <= sqrt(n); i++) {
				if (i % 2 != 0) {
					for (int j = 3; j <= sqrt(i); j+=2) {
						if (i % j == 0) count1++;
					}
					if (count1 == 0) {
						count++;
					}
				}
				count1 = 0; 
			}
		}
		else count = 0;
		cout << count << endl;
		count = 1;
	}
	
	return 0;
} 
