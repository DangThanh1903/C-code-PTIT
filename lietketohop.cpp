#include <bits/stdc++.h>
using namespace std;

long n, k, ok, y, a[10000];
vector<long> b;
long x;

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
	cin >> n >> k;
	for (int t = 0; t < k; t++) {
		a[t] = t + 1;
	}
	ok = 1;
	for (int r = 0; r < n; r++) {
		cin >> x;
		b.push_back(x);
	}
	sort(b.begin(), b.end());
	cout << endl;
	for (int q = 0; q < b.size() - 1; ) {
		if (b[q] == b[q+1]) b.erase(b.begin() + q + 1);
		else q++;
	}
	n = b.size();
	while (ok != 0) {
		for (int u = 0; u < k; u++) {
			y = a[u] - 1;
			cout << b[y] << " ";
		} 
		sinh();
		cout << endl;
	}
	
	return 0;
}
