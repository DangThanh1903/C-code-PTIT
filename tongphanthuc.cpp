#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double N, M = 0;
	cin >> N; 
	for (int i=0; i<N; i++) {
		M = M + 1.0/(i+1);
	}
	printf("%.4lf", M);
	
	return 0;	
}
