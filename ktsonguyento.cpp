#include <bits/stdc++.h>

using namespace std;

int main() {
	long long n;
	int cnt = 0;
	cin >> n;
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) cnt++;
	}
	if (n == 0 || n == 1) cout << "NO";
	else {
		if (cnt == 0) cout << "YES";
		else cout << "NO";
	}
	
	return 0;
}
