#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
	int n, x;
	vector<long> arr;
	cin >> n;
	for (int j = 0; j < n; j++) {
		cin >> x; arr.push_back(x); 
	}
	sort(arr.begin(), arr.end());
	for (int i = 0; i < arr.size() - 1 ;) {
		if (arr[i] == arr[i+1]) {
			arr.erase(arr.begin() + i);
		}
		else i++;
	}
	for (int z = 0; z < arr.size(); z++) {
		cout << arr[z] << " ";
	}
	return 0;
}


