#include <bits/stdc++.h>
using namespace std;

int main () {
	long long a1, a2;
	int cnt = 0;
	cin >> a1 >> a2;
	if (a1 <= a2) {
		for (long long i = a1; i <= a2; i++) {
			cnt = 0;
			if (i == 2) cout << "2 ";
			if (i % 2 != 0 && i != 1) {
				for (long long j = 3; j <= sqrt(i); j+=2) {
					if (i % j == 0) cnt++;
				}
			}
			else cnt++;
			if (cnt == 0) cout << i << " ";
		}
	}
	else {
		for (long long i = a2; i <= a1; i++) {
			cnt = 0;
			if (i == 2) cout << "2 ";
			if (i % 2 != 0 && i != 1) {
				for (long long j = 3; j <= sqrt(i); j+=2) {
					if (i % j == 0) cnt++;
				}
			}
			else cnt++;
			if (cnt == 0) cout << i << " ";
		}
	}
	
	return 0;
} 
