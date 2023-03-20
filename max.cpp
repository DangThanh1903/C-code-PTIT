#include <stdio.h>

void XoaPhanTu(int a[], int &n, int pos){
    if(n <= 0){
        return;
    }
    if(pos < 0){
        pos = 0;
    }
    else if(pos >= n){
        pos = n-1;
    }
    for(int i = pos; i < n - 1; i++){
        a[i] = a[i+1];
    }
    --n;
}

int main() {
	int a, max1, max2, pos;
	scanf("%d", &a);
	int array[a];
	for (int i=0; i<a; i++) {
			scanf("%d", &array[i]);
	}
	if (a > 2) {
		for (int i=0; i<a; i++) {
			if (array[i] > max1) {
				max1 = array[i];
				pos = i;
			}
		}
		XoaPhanTu( array, a, pos);
		for (int i=0; i<(a-1); i++) {
			if (array[i] > max2) {
				max2 = array[i];
			}
		}
	}
	else {
		if (array[0] > array[1]) {
			max1 = array[0];
			max2 = array[1];
		}
		else {
			max1 = array[1];
			max2 = array[0];
		}
	}
	printf("%d %d", max1, max2);
	
	
	
	return 0;
}
