#include <bits/stdc++.h>
using namespace std;

int ktsonguyento(long long n) {
    if (n == 0 || n == 1) return 0;
	else {
		for (long i = 2; i <= sqrt(n); i++) {
      		if (n % i == 0) return 0;
 	   	}
 	   	return 1;
	}
}

int tongchusonguyento(long long n) {
    long long count = 0;
    for (; n > 0; ) {
        if (ktsonguyento(n%10) != 1) {
            count = 1;
            break;
        }
        n /= 10;
    } 
    if (count == 1) return 0;
    else return 1;
} 

int tongchuso(long long n) {
    long long sum = 0;
    for (; n > 0; ) {
        sum += n%10;
        n /= 10;
    } 
    if (ktsonguyento(sum) == 1) return 1;
    else return 0;
} 

int main() {
    long a, b , count = 0;
    cin >> a >> b;
    for (int i = a; i <= b; i++) {
        if (tongchusonguyento(i) == 1) {
        	if (ktsonguyento(i) == 1) {
        		if (tongchuso(i) == 1) count++;
			}
		}
    }
    cout << count;
   return 0;
}
