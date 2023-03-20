#include <bits/stdc++.h>
using namespace std;

int n, k, ok = 0;
string a;
//             H  A  A  A  A  A  H  A
//A=65         H  A  A  H  A  A   
//H=72         72 65 65 72 65 65
  
void sinh() {
	int i = n - 2;
	while (i >= 2 && (a[i-1] == 'H' && a[i] == 'A')) i--;
	if (i > 1 && a[i] != 'H') {
		a[i] = 'H';
		for (int z = i+1; z < n; z++) a[z] = 'A';
	}
	cout << i << " ";
}




int main() {
	int test;
	cin >> test;
	while (test--) {
		ok = 0;
		cin >> n;
		a[0] = 'H';
		for (int i = 1; i < n; i++) {
			a[i] = 'A';
		}
		while (ok == 0) {
			for (int v = 0; v < n; v++) {
				cout << a[v];
			}
			cout << " ";
			sinh();
		}
	}
	
	
	
	return 0;
}
