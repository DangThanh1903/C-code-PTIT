#include <iostream>

int main() {
	int c, z, a;
	scanf("%d", &c); 
	for (int i=0; i<c; i++) {
		long b;
		scanf("%d", &b); 
		long a=b;
		for (int j=2; j<b; ) {
			if (b%j==0) {
				b=b/j; 
				z++;
			}
			else j++;
			printf("%d ", b);
		}
		printf("%d", z);
		
	}
	
	return 0;
}
