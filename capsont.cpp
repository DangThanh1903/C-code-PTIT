#include <bits/stdc++.h>
using namespace std;

int main() {
	int test, cnt = 0, cnt2 = 0;
	long num;
	cin >> test;
	while (test--) {
		cin >> num;
		
		if (num == 4)	{
			cout << "2 2" << endl;
			cnt2++;
		}
		else {
			
			if (num <= 3) {
				cout << "-1" << endl;
				cnt2++;
			}
			else {
				if (num % 2 != 0) {
					for (int i = 3; i < sqrt(num - i); i+=2) {
						if ((num - 2) % i == 0) cnt++;
					}
					if (cnt == 0)	{
						cout << "2 " << num - 2 << endl;
						cnt2++;
					}
					cnt = 0;
				}
				else {
					for (int n = 3; n < sqrt(num - n); n+=2) {
						if ((num - 3) % n == 0) cnt++;
					}
					if (cnt == 0)	{
						cout << "3 " << num - 3 << endl;
						cnt2++;
					}
					cnt = 0;
				}
			}
			
		}
		
		
		
		
		if (cnt2 == 0 && num > 4) {
			cnt = 0;
			for (int z = 5; z <= num/2; z+=2) {
				for (int j = 3, v = 3; j <= sqrt(z), v <= sqrt(num - z); j+=2, z+=2) {
					if (z % j == 0 || (num - z) % v == 0) cnt++;
				}
				if (cnt == 0) {
					cout << z << " " << num - z << endl;
					break;
				}
			}
		
		}
		
		
		
	}
	
	return 0;
}
