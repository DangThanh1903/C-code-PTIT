#include <bits/stdc++.h>
using namespace std;

int main() {
	long long num, count = 0;
	long long i = 2, test = 0;
	cin >> num;
	while (num > 1) {
		while (num % i == 0) {
			num /= i;
			count++;
		}
		if (count > 1) {
			test = 1;
			cout << "0";
			break;
		}
		count = 0;
		i++;
	}
	if (test == 0) cout << "1";
	
   return 0;
}

