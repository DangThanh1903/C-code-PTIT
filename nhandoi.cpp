#include <stdio.h>

int nhandoi(int a){
	return a*2;
}

int main() {
	int a;
	scanf("%d", &a);
	for (int i=0; i<a; i++){
		int b;
		scanf("%d", &b);
		b=nhandoi(b);
		printf("%d\n", b);
	}
	return 0;
} 
