#include <stdio.h>

int main() {
	int n1, n2, pos;
	scanf("%d %d", &n1, &n2);
	int array1[n1], array2[n2];
	for (int i=0; i<n1; i++) {
		scanf("%d", &array1[i]);
	}
	for (int j=0; j<n2; j++) {
		scanf("%d", &array2[j]);
	}
	scanf("%d", &pos);
	for (int z=0; z < pos; z++) {
		printf("%d ", array1[z]);	
	}
	for (int v=0; v < n2; v++) {
		printf("%d ", array2[v]);
	}
	for (int z=pos; z < n1; z++) {
		printf("%d ", array1[z]);
	}
	return 0;
}
