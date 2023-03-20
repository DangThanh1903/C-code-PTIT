#include <bits/stdc++.h>
using namespace std;

int n, a[1000], ok;

void hoanvi() {
	int i = n - 1;
	int j;
	while (i >= 1 && a[i-1] > a[i]) i--;
	if (i == 0 && a[0] == n) {
		for (int v = 0; v < n; v++) {
			a[v] = v + 1;
		}
	}
	else {
		for (j = n - 1; j >= i; j--) {
			if (a[j] > a[i - 1]) swap(a[i - 1], a[j]);
		}
	}
}




int main() {
	int test;
	cin >> test;
	while (test--) {
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		hoanvi();
		for (int z = 0; z < n; z++) {
			cout << a[z] << " ";
		}
		cout << endl;
	}
	
	
	
	
	return 0;
}
