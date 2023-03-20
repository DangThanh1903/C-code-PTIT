#include <stdio.h>


int main() {
	int t, n;
	scanf("%d", &t);
	for (int i=0; i<t; i++){
		int count = 0;
		scanf("%d", &n);
		long array[n];
		for (int j=0; j<n; j++) {
			scanf("%ld", &array[j]);
		}
		for (int x = 0, z = (n-1); x<= (n-1)/2, z>= (n-1)/2; x++, z--) {
			if (array[x] != array[z]) {
				count = 1;
				break;
			}
		}
		if (count == 0) printf("YES\n");
		else printf("NO\n");
	}
	
	
	
	
	return 0;
}
