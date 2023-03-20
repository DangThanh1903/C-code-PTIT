#include <bits/stdc++.h> 
using namespace std;

int main () {
	int test, m;
	string n;
	cin >> test;
	while (test--) {
		int t = 0;
		cin >> n;
		for (int i = n.length() - 1; i >= 0 ; i--) {
			
			if (t == 1) {
				if (n[i] == '0') {
					n[i] = '1';
					t = 1;
				}
				else {
					n[i] = '0';
					t = 0;
				}
			}
			if (i == n.length() - 1) {
				if (n[i] == '1') {
					n[i] = '0';
				}
				else {
					n[i] = '1';
					t = 1;
				}
			}
			if (t == 0) break;
		}
		for (int z = 0; z < n.length(); z++) {
			cout << n[z];
		}
		cout << endl;
		
	}
	return 0;
}
