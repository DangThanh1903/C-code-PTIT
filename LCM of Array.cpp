#include <iostream>
using namespace std;
typedef long long int ll;

ll ucln(ll a, ll b) {
	if (b==0) return a;
	else return ucln(b, a%b);
}

ll bcnn(ll a, ll b) {
	ll c=a*b;
	return c/ucln(a, b);	
}


ll ucln1(ll n) {
	ll z;
	for (int i=0; i<n; i++) {
		z=bcnn(z, (i+1));
	}
	return z;
}


int main() {
	int c;
	cin>>c;
	for (int i=0; i<c; i++) {
		ll n;
		cin >>n;
		cout<<ucln1(n);
	}
	return 0;
}
