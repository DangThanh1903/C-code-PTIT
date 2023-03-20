#include <iostream>

using namespace std;

int main () {
	int a;
	double c=0;
	cin >> a;
	for (int i=1; i<=a; i++) {
		double b=i+i+1;
		c=c+(1/b);
	}
	cout << c;
	return 0;
}
