#include <bits/stdc++.h>
using namespace std;

long n, k, ok, y, b[10000];
vector<string> a;
string x;

void sinh() {
	int i = k - 1;
	while (i >= 1 && b[i] == n - k + i + 1) {
		--i;
	} 
	if (i == 0 && b[0] == n - k + i + 1) {
		ok = 0;
	}
	else {
		b[i]++;
		for (int j = i + 1; j <= k; ++j) {
			b[j] = b[j - 1] + 1;
		}
	}
}

int main() {
	int test;
	cin >> test;
	while (test--) {
		cin >> n >> k;
	for (int t = 0; t < k; t++) {
		b[t] = t + 1;
	}
	ok = 1;
	while (ok != 0) {
		for (int i = 0; i < k; i++) {
			y = b[i] + 65 - 1;
			cout << (char)y;
		} 
		sinh();
		cout << endl;
	}
	}
	
	return 0;
}
