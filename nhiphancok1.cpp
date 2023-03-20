#include <bits/stdc++.h>
using namespace std;

int main() {
	int test, n, t, ok = 1;
	cin >> test;
	while (test--) {
		cin >> n >> t;
		int a[100];
		for (int i = 0; i < n; i++) {
			if (i < n - t) a[i] = 0;
			else a[i] = 1;
		}
		for (int z = 0; z < n; z++) cout << a[z];
		cout << endl;
		while(ok) {
			
		}
	}
	
	
	
	
	return 0;
}

