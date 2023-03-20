#include <bits/stdc++.h>

using namespace std;

int main() {
	int test;
	double x1, y1, x2, y2, distance;
	cin >> test;
	while (test--) {
		cin >> x1 >> y1 >> x2 >> y2;
		distance = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
		cout << setprecision(4) << fixed << distance << endl;
	}
	
	
	return 0;
} 
