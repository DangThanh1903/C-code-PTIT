#include <bits/stdc++.h>
using namespace std;

bool nguyentocungnhau(long long x, long long y) {
	if (x % 2 == 0 && y % 2 == 0) return false;
	for (int i = 3; i <= x; i += 2) {
		if (x % i == 0 && y % i == 0) return false;
	}
	return true;
}


int main() {
	int n, count = 0;
	long x;
	cin >> n;
	vector<long> a;
	for (int i = 0; i < n; i++) {
		cin >> x;
		a.push_back(x);
	}
	
	for (int z = 0; z < n; z++) {
		for (int j = z + 1; j < n; j++) {
			if (nguyentocungnhau(a[z], a[j])) count++;
		}
	}
	cout << count;
	
	
	return 0;
}

