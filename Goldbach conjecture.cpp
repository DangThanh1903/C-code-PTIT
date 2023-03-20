#include <bits/stdc++.h>
using namespace std;

int ktsonguyento(long long n) {
	if (n == 0 || n == 1) return 0;
	else{
		for (int i = 3; i <= sqrt(n); i+=2) {
			if (n % i == 0) return 0;
		}
		return 1;
	}
	
} 


int main() {
	int test;
	long long n;
	cin >> test;
	while (test--) {
		cin >> n;
		for (int i = 3; i <= n - i; i+=2) {
			if (ktsonguyento(i) == 1) {
				if (ktsonguyento(n - i) == 1) cout << i << " " << n - i << endl;
			} 
		}
	}
	
   return 0;
}

