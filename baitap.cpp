#include <iostream>
using namespace std;

long long gcd(long long a, long long b) {
	if (b==0) return a;
	else return gcd(b, a%b); 
}

long long lcm(long long a, long long b) {
	long long c=a*b;
	return c/gcd(a, b);
}

int main() {
	int c;
	cin>>c; 
	for (int i=0; i<c; i++) {
		long long a, b;
		cin >>a>>b;
		cout<<gcd(a,b)<<" "<<lcm(a, b)<<endl;
	}
	return 0;
}
