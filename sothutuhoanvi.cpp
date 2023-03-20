#include <bits/stdc++.h>
using namespace std;

long n, a[4000000], ok, b[1000000], count1;

void hoanvi() {
	int i = n - 1;
	int j;
	while (i > 1 && a[i-1] > a[i]) i--;
	if (i == 1 && a[0] == n) {
		ok = 0;
	}
	else {
		int j = n-1;
		while (a[i-1] > a[j]) --j;
		swap(a[i-1], a[j]);
		count1++;
		reverse(a + i, a + n);
	}
}




int main() {
	int test, count2 = 0;
	cin >> test;
	while (test--) {
		ok = 1;
		count1 = 1;
		cin >> n;
		for (int h = 0; h < n; h++) {
			a[h] = h + 1;
			cin >> b[h];
		}
		for (int y = 0; y < n; y++) {
			if (a[y] == b[y]) count2++;
		}
		if (count2 == n) cout << "1" << endl;
		if (n != 1) {
			while (ok == 1) {
				count2 = 0;
				hoanvi();
				if (ok == 0) break;
				for (int y = 0; y < n; y++) {
					if (a[y] == b[y]) count2++;
				}
				if (count2 == n) cout << count1 << endl;
			}
		}
		cout << endl;
	}
	
	return 0;
}
