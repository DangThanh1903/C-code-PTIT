#include <bits/stdc++.h>
using namespace std;

vector<char> a;
int n, ok = 0;
char x = 'A';

void sinh() {
	int i = n - 1;
	while (i >= 1 && a[i] == 'B') i--;
	if (a[i] == 'A') {
		a[i] = 'B';
		for (int z = i; z <= n + 1; z++) {
			a[z+1] = 'A';
		}
	}
	else ok = 1;
}


int main() {
	int test;
	cin >> test;
	while (test--) {
		ok = 0;
		cin >> n;
		a.erase(a.begin(), a.end());
		for (int i = 0; i < n; i++) {
			a.push_back('A');
			cout << a[i];
		}
		cout << " ";
		while (ok == 0) {
			sinh();
			if (ok == 1) break;
			for (int j = 0; j < n; j++) {
				cout << a[j];
			}
			cout << " ";	
		}
		cout << endl;
	}
	
	
	
	return 0;
}
