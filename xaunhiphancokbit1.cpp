#include <bits/stdc++.h>
using namespace std;

int n, k, a[1000], ok;

int sinh() {
	int i = n - 1;
	while (i >= 0 && a[i] >= a[i + 1]) i--;
	if (i >= 0) {
		swap(a[i], a[i + 1]);
		sort(a + i + 1, a + n);
	}
	else ok = 1;
}


int main() {
	int test;
	cin >> test;
	while (test--) {
		ok = 0;
		cin >> n >> k;
		for (int i = 0; i < n; i++) {
			if (i < n - k) a[i] = 0;
			else a[i] = 1;
			cout << a[i];
		}
		cout << endl;
		while (ok == 0) {
			sinh();
			if (ok == 1) break;
			for (int z = 0; z < n; z++) {
				cout << a[z];
			}
			cout << endl;
		}
	}
	
	
	
	
	
	return 0;
}
