#include <bits/stdc++.h>
using namespace std;

int test, n, k, a[100], ok;

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
	cin >> test;
	while (test--) {
		ok = 1;
		cin >> n >> k;
		for (int z = 0; z < k; z++) {
			a[z] = z + 1;
		}
		while (ok != 0) {
			for (int i = 0; i < k; i++) {
				cout << a[i];
			}
			cout << " ";
			sinh();
		}
		cout << endl;
	}
	return 0;
}
