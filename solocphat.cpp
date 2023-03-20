#include <bits/stdc++.h>
using namespace std;

int main() {
	int count = 0;
	string a;
	cin >> a;
	for (int i = 0; i < a.size(); i++) {
		if (a[i] == '0' || a[i] == '6' || a[i] == '8') {
			count = 1;
		}
		else {
			count = 0;	
			break;		
		}
	}
	cout << count;
   return 0;
}

