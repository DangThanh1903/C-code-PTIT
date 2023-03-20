#include <bits/stdc++.h>
using namespace std;

bool nguyentocungnhau(long long x, long long y) {
	for (int i = 2; i <= x; i++) {
		if (x % i == 0 && y % i == 0) return false;
	}
	return true;
}




int main() {
	long long a, b;
	cin >> a >> b;
	long long x = a, y = a + 1;
	while (x < b) {
		while (y <= b) {
			if (nguyentocungnhau(x, y)) cout << "(" << x << "," << y << ")" << endl;
			y++;
		}
		x++;
		y = x + 1;
	}
	
   return 0;
}

