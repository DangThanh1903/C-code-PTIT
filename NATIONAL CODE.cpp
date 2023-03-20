#include <iostream>
#include <string.h>
using namespace std;


int main() {
	int s;
	char str[30];
	const char t[4] = "084";
	char *token;
	cin >> s;
	
	for (int i=0; i<s; i++) {
		fgets(str, sizeof(str)+1, stdin);
		fgets(str, sizeof(str)+1, stdin);
		token = strtok(str, t);
		while( token != NULL ) {
			printf("%s", token);
			token = strtok(NULL, t);
		}
		printf("\n");	
	}
	return 0;
} 
