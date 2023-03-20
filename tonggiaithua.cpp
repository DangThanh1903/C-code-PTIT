#include <iostream>
using namespace std;

long giaithua(int n) {
	long m = 1;
	for (int i=0; i<n; i++) {
		m = m*(i+1);
	}
	return m;
}



int main() {
	int n;
	long m = 0;
	cin >> n;
	for (int i=0; i<n; i++) {
		m = m + giaithua(i+1);
	}
	cout << m;
	return 0;
}
