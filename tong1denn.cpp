#include <iostream>
using namespace std;

int main() {
	long test, a;
	cin >> test;
	while (test--) {
		cin >> a;
		cout << a*(a+1)/2 << endl;
	}
	return 0;
}
