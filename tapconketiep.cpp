#include <bits/stdc++.h>
using namespace std;



int n, k, a[1000], ok;

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
		for (int v = 0; v < k; v++) {
			a[v] = v + 1;
		}
	}
}

int main()  {
	int test;
	cin >> test;
	while (test--) {
		cin >> n >> k;
		for (int z = 0; z < k; z++) {
			cin >> a[z];
		}
		sinh();
		for (int j = 0; j < k; j++) {
			cout << a[j] << " ";
		}
		cout << endl;
	}
	
	
	
	
	
	return 0;
}
