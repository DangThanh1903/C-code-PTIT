#include <stdio.h>

int main() {
	int test, n, count;
	scanf("%d", &test);
	for (int i=0; i<test; i++) {
		count=0;
		scanf("%d", &n);
		int array[n];
		for (int j=0; j<n; j++) {
			scanf("%d", &array[j]);
			if (array[j] >= array[j-1]) count++;
		}
	printf("%d\n", count);
	}
	return 0;
}
