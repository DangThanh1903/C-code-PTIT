#include <bits/stdc++.h>
using namespace std;


int i, n, a[100], ok;

int main() {
	ok = 1;
	cin >> n;
	int a[n];
	for (int z = 0; z < n/2; z++) {
		a[z] = 0;
		cout << a[z] << " ";
	}
	for (int z = n/2-1; z >= 0; z--) {
		cout << a[z] << " ";
	}
	cout << endl;
	while (ok) {
		i = n/2 - 1 ;
		while ( i >= 1 && a[i] == 1) {
			a[i] = 0;
			--i;
		}
		if (i == 0 && a[0] == 1) {
			break;
		}
		else {
			a[i] = 1;
		}
		
		for (int j = 0; j < n/2; j++) {
			cout << a[j] << " ";
		}
		for (int j = n/2-1; j >= 0 ; j--) {
			cout << a[j] << " ";
		} 
		cout << endl;
	}
	
	return 0;
}
