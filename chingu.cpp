#include <bits/stdc++.h>
using namespace std;

int main () {
	double w, h;
	double BMI;
	cin >> w >> h;
	BMI = w/(h*h);
	if (BMI < 18.5) cout << "thinness";
	else {
		if (BMI < 25) cout << "normal";
		else {
			if (BMI < 30) cout << "overweight";
			else {
				if (BMI < 35) cout << "obese 1";
				else {
					if (BMI < 40) cout << "obese 2";
					else cout << "obese 3";
				}
			}
		}
	}
	return 0;
}

