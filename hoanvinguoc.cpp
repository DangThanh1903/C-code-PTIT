#include <bits/stdc++.h>
using namespace std;


long n, a[4000000], ok;

void hoanvi() {
	int i = n - 1, j;
	while (i > 1 && a[i-1] < a[i]) i--;
	if (i == 1 && a[0] == 1) {
		ok = 0;
	}
	else {
		j = n-1;
		while (a[i-1] < a[j]) --j;
		swap(a[i-1], a[j]);
		reverse(a + i, a + n);
	}
}




int main() {
	int test;
	cin >> test;
	while (test--) {
		ok = 1;
		cin >> n;
		for (int h = 0; h < n; h++) {
			a[h] = n - h;
			cout << a[h];
		}
		cout << " ";
		if (n != 1) {
			while (ok == 1) {
				hoanvi();
				if (ok == 0) break;
				for (int z = 0; z < n; z++) {
					cout << a[z];
				}
				cout << " ";
			}
		}
		cout << endl;
	}
	
	
	
	
	return 0;
}
