#include <bits/stdc++.h>
using namespace std;

int main() {
	long n, x;
	cin >> n;
	vector<long> a, b ;
	for (int i = 0; i < n; i++) {
		cin >> x;
		a.push_back(x);
	}
	for (int i = 0; i < a.size();i++) {
		for (int j = i + 1; j < a.size();){
			if (a[i] == a[j]) {
				a.erase(a.begin() + j);
				b[i]++;
			}
			else j++;
		}
	} 
	for (int i = 0; i < a.size(); i++) {
		cout << a[i] << " " << b[i];
	}
	
	return 0;
}

