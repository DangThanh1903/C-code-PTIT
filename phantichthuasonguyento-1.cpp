#include <bits/stdc++.h>
using namespace std;

int main() {
	int test, count1; 
	long long num;
	cin >> test;
	while (test--) {
		count1 = 1;
		cin >> num;
		long long j = 0, element[99] = {0}, count[99] = {0};
		for (int i = 2; num > 1;) {
			if (num % i ==  0) {
				num /= i;
				element[j] = i;
				count[j]++;
				count1 = 0;
			}
			else {
				count1++;
				i++;
				if (count1 == 1) j++;
			}
		}
		for (int z=0; z<j+1; z++) {
			cout << element[z] << " " << count[z] << " "; 
		}
		cout << endl;
	}
	
	return 0;
}
