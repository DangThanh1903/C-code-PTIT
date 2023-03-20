#include <bits/stdc++.h>
using namespace std;

int test, n, k, a[100], b[1000], ok, count1, count2;

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
		count1++;
	}
}

int main() {
	cin >> test;
	while (test--) {
		count1 = 1;
		ok = 1;
		cin >> n >> k;
		for (int z = 0; z < k; z++) {
			a[z] = z + 1;
			cin >> b[z];
		}
		while (ok != 0) {
			count2 = 0;
			for (int i = 0; i < k; i++) {
				if (a[i] == b[i]) {
					count2++;
				}
			}
			if (count2 == k) break;
			sinh();
		}
		cout << count1 << endl;
	}
	return 0;
}
