#include <bits/stdc++.h> 
using namespace std;

int main() {
	int test, i;
	long long num;
	cin >> test;
	while (test--) {
		cin >> num;
		for (i = 2; num > 1; ) {
			if (num % i == 0) {
				num /= i;
				cout << i << " ";
			}
			else i++;
		}
		cout << endl;
	}
	return 0;
}
