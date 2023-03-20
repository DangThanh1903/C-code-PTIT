#include <bits/stdc++.h>
using namespace std;

int main() {
	long n , m, x;
	cin >> n >> m;
	vector<long> a, b;
	for (int i = 0; i < m + n; i++) {
		cin >> x;
		a.push_back(x); 
	}
	sort(a.begin(), a.end());
	
	for (int i = 0, j = 0; i < m + n;) {
		if (a[i] == a[i+1] && i != m + n - 1) {
			b[j] = a[i + 1];
			j++;
			a.erase(a.begin() + i + 1);
		}
		else i++;
	}
	for (int i = 0; i < b.size(); i++) {
		cout << b[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < a.size(); i++) {
		cout << a[i] << " ";
	}
	return 0;
}

