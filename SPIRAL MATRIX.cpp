#include <bits/stdc++.h>

using namespace std;

int main() {
	int x, y, test;
	cin >> test;
	for (int v=0; v<test; v++) {
		cin >> x >> y;
		int tich = x*y;
		int A[y][x] ,B[tich];
		for (int i=0; i<y; i++) {
			for (int j=0; j<x; j++) {
				cin >> A[i][j];
			}
		}
		int c=0;
		for (int z = 0; z < x && z < y; z++, x--, y--) {
            for (int i = z; i < x; i++) {
                B[c++] = A[z][i];
            }
            for (int i = z + 1; i < y; i++) {
                B[c++] = A[i][x - 1];
            }
            for (int i = x - 2; i >= z; i--) {
                B[c++] = A[y - 1][i];
            }
            for (int i = y - 2; i >= z + 1; i--) {
                B[c++] = A[i][z];
            }
        }
		for (int k=0; k<tich; k++) {
			cout << B[k] << " ";
		}
		cout << "\n";
	}
	
	
	
	return 0;
}
