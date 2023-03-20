#include <stdio.h>

int main () {
	int a, b; 
	scanf("%d %d", &a, &b);
	for (; a!=b;)
		if (a>b) a=a-b;
		else b=b-a;
	printf("%d", a);
	return 0;
}
