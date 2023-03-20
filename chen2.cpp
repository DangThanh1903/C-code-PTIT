#include <stdio.h>

int main() {
	int test, n1, n2, pos;
	scanf("%d", &test);
	for (int i=0; i < test; i++) {
		scanf("%d %d %d", &n1, &n2, &pos);
		int array1[n1], array2[n2];
		
		for (int x=0; x < n1; x++) {
			scanf("%d", &array1[x]);
		}
		
		for (int z=0; z < n2; z++) {
			scanf("%d", &array2[z]);
		}
		printf("Test %d:\n", i+1);
		for (int j=0; j<pos; j++){
			printf("%d ", array1[j]);
		}
		for (int y=0; y<n2; y++){
			printf("%d ", array2[y]);
		}
		for (int j=pos; j<n1; j++){
			printf("%d ", array1[j]);
		}
		printf("\n");
	}
	return 0;
}
