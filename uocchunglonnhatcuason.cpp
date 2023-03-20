#include <bits/stdc++.h>
using namespace std;

int ucln(long long a, long long b){
	for (; a!=b;){
		if (a>b) a-=b;
		else b-=a;
	}
	return a;
}

int main() {
	int test, n;
	long long num, temp;
	cin >> test;
	while(test--) {
		num = 1;
		cin >> n;
		for (int i=n; i > 0; i--) {
			temp = ucln(num, i);
			cout << temp << "-" << i << "-";
			if (temp == 1) num = num * i;
			else if (num % i != 0) num = num * temp;
			cout << num <<endl;
		}
	}
	return 0;
}
