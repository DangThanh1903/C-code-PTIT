#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
	int n, x, k, count = 0;
	vector<long> arr;
	cin >> n;
	for (int j = 0; j < n; j++) {
		cin >> x; arr.push_back(x); 
	}
	sort(arr.begin(), arr.end());
	cin >> k;
	for (int i = 0; i < arr.size() - 1 ;) {
		if (arr[i] == k) {
			arr.erase(arr.begin() + i);
			count ++;
		}
		else i++;
	}
	cout << count << endl;
	for (int z = 0; z < arr.size(); z++) {
		cout << arr[z] << " ";
	}
	return 0;
}


