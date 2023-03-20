#include <bits/stdc++.h>
using namespace std;



string s1, s2;

long xaucon(string s1, string s2) {
	int count = 0;
	for (int i = 0; i < s1.size();) {
		for (int z = 0; z < s2.size(); z++) {
			if (s1[i] == s2[z]) {
				s1.erase(s1.begin() + i);
				s2.erase(s2.begin() + z);
				count++;
				break;
			}
			else {
				if (z == s2.size() - 1) i++;
			}
		}
	}
	return count;
}



int main() {
	int test;
	cin >> test;
	while (test--) {
		cin >> s1 >> s2;
		cout << xaucon(s1, s2) << endl;
	}
	
	return 0;
}

