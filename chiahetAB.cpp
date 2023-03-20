#include <bits/stdc++.h>
using namespace std;

int main () {
	int test, count;
	long M, N, A, B;
	cin >> test;
	while (test--) {
		cin >> M >> N >> A >> B;
		for (int i = M; i <= N; i++) {
			if ((i%A) == 0 || (i%B) == 0) {
				count++;
			}
		}
		cout << count << endl; 
		count = 0; 
	}
	
	
	
	
	
	return 0;
}
