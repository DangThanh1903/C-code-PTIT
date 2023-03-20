#include <bits/stdc++.h>
using namespace std;

int main() {
	long b, cnt = 0;
	cin >> b;
	long a[b];
	for (int i = 0; i < b; i++) {
		cin >> a[i];
		if (a[i] <= a[i - 1] && i >= 1) {
			cnt = 1;
			break;
		}
	}
	if (cnt == 1) cout << "NO";
	else cout << "YES";
	return 0;
}

