#include <bits/stdc++.h>
using namespace std;

int main() {
	int test, temp;
	cin >> test;
	long long num;
	while(test--) {
		cin >> num;
		temp = 0;
		for ( ; num > 0 || temp > 10;) {
			temp += (num%10);
			num /= 10;
			if (num < 1 && temp > 9) {
				num = temp;
				temp = 0;
			}
		}
		cout << temp << endl;
		
	}
	
	
	return 0;
}
