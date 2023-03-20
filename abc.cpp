#include <stdio.h>
#include <math.h>

int main (){
	int t;
	scanf ("%d", &t);
	while (t--){
		long long n;
		scanf ("%lld", &n);
		int dem=0;
		int a[10005];
		while (n>0){
			a[dem]=n%10;
			dem++;
			n/=10;
		}
		int check;
		for (int i=0; i<dem-3; i++){
			if (a[i]==4 && a[i+1]==8 && a[i+2]==0){
				check=i;
				break;
			}
		}
		for (int i=check; i<dem-3; i++){
			a[i]=a[i+3];
		}
		for (int i=dem-4; i<=0; i++){
			printf ("%d", a[i]);
		}
		printf ("\n");
	}
	return 0;
}
