#include <bits/stdc++.h>
using namespace std;

int main() {
	long n, m, x;
	cin >> n >> m;
	vector<long> a;
	for (int i = 0; i < n + m; i++) {
		cin >> x;
		a.push_back(x);
	}
	sort(a.begin(), a.end());
	for (int i = 0; i < n + m; i++) {
		cout << a[i] << " ";
	}
	return 0;
}

