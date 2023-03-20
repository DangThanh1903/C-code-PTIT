#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, cnt;
	long x;
	cin >> n;
	vector<long> a;
	for (int i = 0; i < n;) {
		cnt = 0;
		cin >> x;
		a.push_back(x);
		for (int j = i - 1; j >= 0; j--) {
			if (a[j] >= a[i] && i >= 1) {
				a.pop_back(); 
				cnt = 1;
				n--;
				break;
			}
		}
		if (cnt == 0) i++;
		else cnt = 0;
	}
	
	for (int z = 0; z < a.size(); z++) {
		cout << a[z] << " ";
	}
	return 0;
}

