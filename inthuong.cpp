#include <iostream>
using namespace std;

int main() {
	int test;
	char text;
	cin >> test;
	while (test--) {
		cin >> text;
		if (text <= 90 && text >= 65) {
			text = text + 32;
			cout << text << endl;
		}
		else {
			text = text - 32;
			cout << text << endl;
		}
	}
	
	return 0;	
}
