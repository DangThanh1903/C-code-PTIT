#include <bits/stdc++.h>
using namespace std;

long n, a[4000000], ok, x;
vector<long> b;

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
		reverse(a + i, a + n);
	}
}




int main() {
	ok = 1;
	cin >> n;
	for (int h = 0; h < n; h++) {
		a[h] = h + 1;
	}
	for (int p = 0; p < n; p++) {
		cin >> x;
		b.push_back(x);
	}
	sort(b.begin(), b.end());
	for (int p = 0; p < n; p++) {
		cout << b[p] << " ";
	}
	cout << endl;
	if (n != 1) {
		while (ok == 1) {
			hoanvi();
			if (ok == 0) break;
			for (int z = 0; z < n; z++) {
				
				cout << b[a[z]-1] << " ";
			}
			cout << endl;
		}
	}
	cout << endl;
	return 0;
}
