#include <iostream>
#include <string.h>
using namespace std;

int main() {
	int c;
	double Diem=0;
	int a=2;
	double So = (double)a/3;
	scanf("%d", &c);
	for (int i=0; i<c; i++) {
		
		int MaDe;
		char Da1, Da2, Da3, Da4, Da5, Da6, Da7, Da8, Da9, Da10, Da11, Da12, Da13, Da14, Da15;
		scanf("%d", &MaDe);
		cin >> Da1>> Da2>> Da3>> Da4>> Da5>> Da6>> Da7>> Da8>> Da9>> Da10>> Da11>> Da12>> Da13>> Da14>> Da15;
		if (MaDe==101) {
			if (Da1=='A') Diem=Diem+So;
			if (Da2=='B') Diem=Diem+So;
			if (Da3=='B') Diem=Diem+So;
			if (Da4=='A') Diem=Diem+So;
			if (Da5=='D') Diem=Diem+So;
			if (Da6=='C') Diem=Diem+So;
			if (Da7=='C') Diem=Diem+So;
			if (Da8=='A') Diem=Diem+So;
			if (Da9=='B') Diem=Diem+So;
			if (Da10=='D') Diem=Diem+So;
			if (Da11=='C') Diem=Diem+So;
			if (Da12=='C') Diem=Diem+So;
			if (Da13=='A') Diem=Diem+So;
			if (Da14=='B') Diem=Diem+So;
			if (Da15=='D') Diem=Diem+So;
		}
		if (MaDe==102) {
			if (Da1=='A') Diem=Diem+So;
			if (Da2=='C') Diem=Diem+So;
			if (Da3=='C') Diem=Diem+So;
			if (Da4=='A') Diem=Diem+So;
			if (Da5=='B') Diem=Diem+So;
			if (Da6=='C') Diem=Diem+So;
			if (Da7=='D') Diem=Diem+So;
			if (Da8=='D') Diem=Diem+So;
			if (Da9=='B') Diem=Diem+So;
			if (Da10=='B') Diem=Diem+So;
			if (Da11=='C') Diem=Diem+So;
			if (Da12=='D') Diem=Diem+So;
			if (Da13=='D') Diem=Diem+So;
			if (Da14=='B') Diem=Diem+So;
			if (Da15=='B') Diem=Diem+So;
		}
		printf("%.2lf\n", Diem);
		Diem=0;
	}
	
	return 0;
}
