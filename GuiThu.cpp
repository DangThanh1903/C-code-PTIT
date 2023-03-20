#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	long y;
	cin >> n;
	vector<long> x;
	for (int i = 0; i < n; i++) {
		cin >> y;
		x.push_back(y);
	}
	for (int z = 0; z < n; z++) {
		if (z != n - 1 && (x[z] - x[z-1]) > (x[z+1] - x[z]) || z == 0) cout << x[z+1] - x[z] << " ";
		else cout << x[z] - x[z-1] << " ";
		if ((x[z] - x[0]) > (x[n-1] - x[z])) cout << x[z] - x[0] << endl;
		else cout << x[n-1] - x[z] << endl;
	}
	
	
	return 0;
}

