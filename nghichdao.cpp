#include <bits/stdc++.h>

using namespace std;

int main() {
	int test;
	string num;
	cin >> test;
	while (test--) {
		cin >> num;
		string renum = num;
		reverse(num.begin(), num.end());
		if (num.compare(renum) == 0) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	
	
	
	return 0;
}
