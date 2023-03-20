#include <bits/stdc++.h>
using namespace std;

long n, x;
vector<long> a, b;

void sinh() {
	for (int z = 0; z < n - 1; z++) {
		x = (a[z] + a[z+1]);
		b.push_back(x);
	}
	n--;
	for (int z = 0; z < n; z++) {
		a[z] = b[z];
	}
	b.erase(b.begin(), b.end()); 
}


int main () {
	int test;
	cin >> test;
	while (test--) {
		a.erase(a.begin(), a.end());
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> x;
			a.push_back(x);
		}
		while (n != 0) {
			cout << "[";
			for (int v = 0; v < n; v++) {
				cout << a[v];
				if (v != n - 1) cout << " ";
			}
			cout << "]" << endl;
			sinh();
		}
		
		
	}
	
	return 0;
}
