#include <bits/stdc++.h>
using namespace std;

int n, k, a[100], ok;

void sinh() {
	int i = k - 1;
	while (i >= 1 && a[i] == n - k + i + 1) {
		--i;
	} 
	if (i == 0 && a[0] == n - k + i + 1) {
		ok = 0;
	}
	else {
		a[i]++;
		for (int j = i + 1; j <= k; ++j) {
			a[j] = a[j - 1] + 1;
		}
	}
}


int main() {
	int test;
	cin >> test;
	long s, b[200], sum = 0;
	while (test --) {
		cin >> n >> s;
		for (int i = 0; i < n; i++) {
			cin >> b[i];
		}
		for (int k = 2; k < n; k++) {
			for (int v = 0; v < k; v++) {
				a[v] = v;
			}
			
			while (ok == 0) {
				for (int l = 0; l < k; l++) {
					sum += b[a[l]];
				}
				cout << sum << endl;
				if (sum == s) {
					cout << "YES";
					break;
				}
				sinh();
				sum = 0;
			}
		}
		
		
		
	}
	return 0;
}

