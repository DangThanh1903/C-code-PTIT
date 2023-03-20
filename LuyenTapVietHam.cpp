#include <bits/stdc++.h>
using namespace std;

long long n;
vector<long> re;
	

int giaithua(long long n) {
	long long temp = 1;
	for (int i = 2; i <= n; i++) {
		temp *= i;
	}
	return temp;
}


int ktsonguyento(long long n) {
	int cnt = 0;
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) cnt++;
	}
	if (n == 0 || n == 1) return 0;
	else {
		if (cnt == 0) return 1;
		else return 0;
	}
}

int tongchuso(long long n) {
	long long sum = 0;
	for (; n > 0; ) {
		sum += n%10;
		n /= 10;
	} 
	return sum;
} 

int tongchusochan(long long n) {
	long long sum = 0;
	for (; n > 0; ) {
		if ((n%10) % 2 == 0) sum += n%10;
		n /= 10;
	} 
	return sum;
} 

int tongchusonguyento(long long n) {
	long long sum = 0;
	for (; n > 0; ) {
		if (ktsonguyento(n%10) == 1) sum += n%10;
		n /= 10;
	} 
	return sum;
} 

int daonguoc(long long n) {
	long long n1 = 0;
	for (; n > 0; ) {
		n1 += n%10;
		n1 *= 10;
		n /= 10;
	}
	return n1/10;
} 

int uocsnt(long long n) {
	long count;
	for (int i = 2; i <= n; i++) {
		if (n % i == 0) {
			if (ktsonguyento(i) == 1) count++;
		}
	}
	return count;
}

int uocsntmax(long long n) {
	long max = 2;
	for (int i = 2; i <= n/2; i++) {
		if (n % i == 0) {
			if (ktsonguyento(i) == 1) {
				if (i > max) max = i;
			}
		}
	}
	return max;
}

int ktso6(long long n) {
	long long count = 0;
	for (; n > 0; ) {
		if (n%10 == 6) count ++;
		n /= 10;
	} 
	if (count > 0) return 1;
	else return 0;
} 

int sumchiahet8(long long n) {
	long long sum = 0;
	for (; n > 0; ) {
		sum += n%10;
		n /= 10;
	} 
	if (sum % 8 == 0) return 1;
	else return 0;
}

int tonggiaithua (long long n) {
	long long sum = 0;
	for (; n > 0; ) {
		sum += giaithua(n%10);
		n /= 10;
	} 
	return sum;
}

int diepso (long long n) {
	long count = 0;
	int i = n%10;
	n /= 10;
	for ( ; n > 0; ) {
		if (n % 10 != i) {
			count = 1;
			break;
		}
		n /= 10;
	}
	if (n < 10) return 1;
	else {
		if (count == 1) return 1;
		else return 0;
	}
}

int tancunglonnhat(long long n) {
	long count = 0;
	int i = n%10;
	n /= 10;
	for ( ; n > 0; ) {
		if (n % 10 > i) {
			count = 1;
			break;
		}
		n /= 10;
	}
	if (count == 1) return 0;
	else return 1;
}

int tongluythua(long long n) {
	vector<int> a;
	long sum = 0;
	for (; n > 0; ) {
		a.push_back(n%10);
		n/= 10;
	}
	for (int i = 0; i < a.size(); i++) {
		sum += pow(a[i], a.size());
	}
	return sum;
}


int main() {
	cin >> n;
	cout << ktsonguyento(n) << endl;
	cout << tongchuso(n) << endl;
	cout << tongchusochan(n) << endl;
	cout << tongchusonguyento(n) << endl;
	cout << daonguoc(n) << endl;
	cout << uocsnt(n) << endl;
	cout << uocsntmax(n) << endl;
	cout << ktso6(n) << endl;
	cout << sumchiahet8(n) << endl;
	cout << tonggiaithua(n) << endl;
	cout << diepso(n) << endl;
	cout << tancunglonnhat(n) << endl;
	cout << tongluythua(n) << endl;
   return 0;
}


