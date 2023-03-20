#include <stdio.h>
#include <math.h>

int test(int n){
    scanf("%d", &n);
    if(n < 2){
        return 1;
    }
    int count = 0;
    for(int v = 2; v < n; v++){
        if(n % v == 0){
            count++;
        }
    }
    if(count == 0){
        return 0;
    }
    else return 1;
}

int main() {
	int t, n;
	scanf("%d", &t);
	scanf("%d", &n);
	int array[n];
	for (int i=0; i<t; i++) {
		for (int j=0; j<n; j++){
			scanf("%d", &array[j]);
		}
		for (int z=0; z<n; z++) {
		printf("%d", test(4));
		printf("%d ", array[z]);
		}
	}
	
	return 0;
} 
