#include <iostream>

using namespace std;

int test(int a){
	int b=1;
	if (a>3) {
		for (int i=2; i<a; i++) {
			if (a%i==0) {
				b=0;
				i=a;
			}
		}
		return b;
	}
	else return 1;
} 

int main() {
	int a, b, d1, d2;
	cin >> a;
	for (int i=4; i<a; i++) {
		b=a-i;
		if (test(b)==0 && test(i)==0) {
			d1=i; d2=b; i=a; 
		}
	}
	cout << d1 << " " << d2;
	
	return 0;
}
