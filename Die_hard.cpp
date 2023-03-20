#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int> c;
	int ca1 = 0, ca2 = 0; 
	long n, x, sum = 0, test = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x;
		c.push_back(x);
	}
	for (int v = 0; v < n; v++) {
		if (c[v] == 25) ca1++;
		else {
			if (c[v] == 50) {
				if (ca1 < 1) {
					test = 1;
					break;
				}
				else ca1--;
				ca2++;
			}
			else {
				if (ca1 >= 3) {
					ca1 -= 3;
				}
				else {
					if (ca1 < 1 || ca2 < 1) {
						test = 1;
						break;
					}
					else {
						ca1--;
						ca2--;
					}
				}
			}
		}
	}
	
	if (test == 1) cout << "NO";
	else cout << "YES"; 
	return 0;
}


