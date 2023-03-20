#include <bits/stdc++.h>
using namespace std;



int n, k, a[1000], b[1000], ok;

void sinh() {
	int i;
	i = k - 1;
	while (i >= 1 && a[i] == n - k + i + 1) {
		--i;
	}
	if (a[0] != n - k + i + 1) {
		a[i]++;
		for (int v = i + 1; v <= k; v++) {
			a[v] = a[i] + v - i;
		}
	}
	else {
		ok = 1;
	}
}

int main()  {
	int test, count;
	cin >> test;
	while (test--) {
		count = 0;
		ok = 0;
		cin >> n >> k;
		for (int z = 0; z < k; z++) {
			cin >> a[z];
			b[z] = a[z];
		}
		sinh(); 
		for (int j = 0; j < k; j++) {
			for (int p = 0; p < k; p++) {
				if (a[j] == b[p]) count++;
			}
		}
		if (ok == 0) cout << k - count << endl;
		else cout << k << endl;
	}
	
	
	
	
	
	return 0;
}
